var express = require("express"),
    app = express(),
    bodyParser = require("body-parser"),
    mongoose = require("mongoose"),
    Campground = require("./models/campground"),
    Comment = require("./models/comment"),
    seedDB = require("./seeds")





mongoose.connect("mongodb://localhost/yelp_camp_v5");

app.use(bodyParser.urlencoded({ extended: true }));
app.set("view engine", "ejs");
app.use(express.static(__dirname + "/public"))

seedDB();

app.get("/", function (req, res) {
    res.render("landing");
});


// INDEX - show all campgrounds
app.get("/campgrounds", function (req, res) {
    //Get all campgrounds from DB
    Campground.find({}, function (err, allCampground) {
        if (err) {
            console.log(err);
        } else {
            res.render("campgrounds/index", { campgrounds: allCampground });
        }
    });


});


//  var campgrounds = [
//         {name: "Salmon Creek", image: "https://images.unsplash.com/photo-1508768516474-73606cb84ce2?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=e074f33c229b735080438a384e50ada1&auto=format&fit=crop&w=1999&q=80"},
//         {name: "Granite Hill", image: "https://images.unsplash.com/photo-1495685288924-ce05d1036b24?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=9c18e42f88d973bbdf030b7ec3544e39&auto=format&fit=crop&w=1950&q=80"},
//         {name: "Mountain Goat's Rest", image: "https://images.unsplash.com/photo-1432817495152-77aa949fb1e2?ixlib=rb-0.3.5&s=fc0bc584571ec4a50a733a79ad4e4971&auto=format&fit=crop&w=1949&q=80"},
//         ];


app.post("/campgrounds", function (req, res) {
    //get data from form and add to campgrounds array
    var name = req.body.name;
    var image = req.body.image;
    var desc = req.body.description;
    var newCampground = { name: name, image: image, description: desc }
    // Create a new campground and save it to the DB
    Campground.create(newCampground, function (err, newlyCreated) {
        if (err) {
            console.log(err);
        } else {
            res.redirect("/campgrounds");
        }
    })
    //redirect back to campgrounds page

});



app.get("/campgrounds/new", function (req, res) {
    res.render("campgrounds/new");
});

// SHOW - shows more info about one campground
app.get("/campgrounds/:id", function (req, res) {
    //find a campground with provided ID
    Campground.findById(req.params.id).populate("comments").exec(function (err, foundCampground) {
        if (err) {
            console.log(err)
        } else {
            console.log(foundCampground);
            //render show template with that campground
            res.render("campgrounds/show", { campground: foundCampground })
        }
    });

})



// ========================
// COMMENTS ROUTES
// ========================


app.get("/campgrounds/:id/comments/new", function (req, res) {
    Campground.findById(req.params.id, function (err, campground) {
        if (err) {
            console.log(err);
        } else {
            res.render("comments/new", { campground: campground });
        }
    })

});

app.post("/campgrounds/:id/comments", function (req, res) {
    //lookup campground usind ID
    Campground.findById(req.params.id, function (err, campground) {
        if (err) {
            console.log(err);
            res.redirect("/campgrounds")
        } else {
            Comment.create(req.body.comment, function (err, comment) {
                if (err) {
                    console.log(err);
                } else {
                    campground.comments.push(comment);
                    campground.save();
                    res.redirect("/campgrounds/" + campground._id)
                }
            })
            // Comment.create({})
        }
        //create new comment
        //connect new comment to campground
        //redirect to campground show page
    })
});





app.listen(process.env.PORT, process.env.IP, function () {
    console.log("The YelpCamp server Has Started");
    console.log(process.env.PORT);
});