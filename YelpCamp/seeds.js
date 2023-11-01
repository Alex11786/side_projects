var mongoose = require("mongoose"),
    Campground = require("./models/campground"),
    Comment    = require("./models/comment");

var data = [
    {name: "Cloud's Rest",
    image: "https://images.unsplash.com/photo-1495685288924-ce05d1036b24?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=9c18e42f88d973bbdf030b7ec3544e39&auto=format&fit=crop&w=1950&q=80",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam imperdiet ornare velit vel tincidunt. Duis luctus erat lectus, sit amet faucibus quam finibus vitae. Etiam et magna facilisis, dignissim mauris viverra, aliquet lacus. Aenean condimentum lorem dapibus, commodo arcu in, vehicula augue. Vivamus luctus sed dolor vel porta. Nunc rutrum nec felis vel viverra. In quis arcu et purus vestibulum ultricies vitae vel lectus. Pellentesque eget ante sed purus hendrerit posuere vitae id nisi. Sed ac nunc eget dui lacinia volutpat. Nullam vitae auctor nisl. Mauris suscipit, nisi quis iaculis molestie, ante magna fringilla justo, id rutrum turpis orci eget diam. Phasellus pellentesque justo dictum ex sagittis interdum non sit amet ipsum."
    },
    {name: "Desert Mesa",
    image: "https://upload.wikimedia.org/wikipedia/commons/e/ef/Wilderness_Adventure_Camps.jpg",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam imperdiet ornare velit vel tincidunt. Duis luctus erat lectus, sit amet faucibus quam finibus vitae. Etiam et magna facilisis, dignissim mauris viverra, aliquet lacus. Aenean condimentum lorem dapibus, commodo arcu in, vehicula augue. Vivamus luctus sed dolor vel porta. Nunc rutrum nec felis vel viverra. In quis arcu et purus vestibulum ultricies vitae vel lectus. Pellentesque eget ante sed purus hendrerit posuere vitae id nisi. Sed ac nunc eget dui lacinia volutpat. Nullam vitae auctor nisl. Mauris suscipit, nisi quis iaculis molestie, ante magna fringilla justo, id rutrum turpis orci eget diam. Phasellus pellentesque justo dictum ex sagittis interdum non sit amet ipsum."
    },
    {name: "Canyon Floor",
    image: "https://res.cloudinary.com/simplotel/image/upload/x_0,y_0,w_2592,h_1458,r_0,c_crop,q_60,fl_progressive/w_960,f_auto,c_fit/youreka/Camp-Kambre_hcemsr",
    description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam imperdiet ornare velit vel tincidunt. Duis luctus erat lectus, sit amet faucibus quam finibus vitae. Etiam et magna facilisis, dignissim mauris viverra, aliquet lacus. Aenean condimentum lorem dapibus, commodo arcu in, vehicula augue. Vivamus luctus sed dolor vel porta. Nunc rutrum nec felis vel viverra. In quis arcu et purus vestibulum ultricies vitae vel lectus. Pellentesque eget ante sed purus hendrerit posuere vitae id nisi. Sed ac nunc eget dui lacinia volutpat. Nullam vitae auctor nisl. Mauris suscipit, nisi quis iaculis molestie, ante magna fringilla justo, id rutrum turpis orci eget diam. Phasellus pellentesque justo dictum ex sagittis interdum non sit amet ipsum."
    }
];

function seedDB(){
    //remove all campgrounds
    Campground.remove({}, function(err){
        if(err){
            console.log(err);
        }
        console.log("removed campgrounds!");
        data.forEach(function(seed){
            Campground.create(seed, function(err, campground){
                if(err){
                    console.log(err);
                } else {
                    console.log("added a campground")
                    //create a comment on each campground
                    Comment.create({text: "This place is great, but I wish there was internet",
                                    author: "Homer"
                    }, function(err, comment){
                        if(err){
                            console.log(err);
                        } else {
                        campground.comments.push(comment);
                        campground.save();
                        console.log("Created new comment")
                        }
                    })
                }
            })
        })
    });
}


module.exports = seedDB;