var numSquares = 6;
// var colors = generateRandomColors(numSquares);
var colors = [];
var pickedColor;
var squares = document.querySelectorAll(".square");
var colorDisplay = document.getElementById("colorDisplay");
var messageDisplay = document.querySelector("#message");
var h1 = document.querySelector("h1");
var resetButton = document.querySelector("#reset");
var modeButtons = document.querySelectorAll(".mode")


init();

function init(){
	//mode buttons event listeners
	setUpModeButtons();
	setUpSquares();
	

	reset();
}


function setUpModeButtons(){
		for(var i = 0; i < modeButtons.length; i++){
		modeButtons[i].addEventListener("click", function(){
			modeButtons[0].classList.remove("selected");
			modeButtons[1].classList.remove("selected");
			this.classList.add("selected");
			this.textContent === "Easy" ? numSquares = 3: numSquares = 6; /*Другой способ записывать условие*/
			reset();
		});
	}
}

function setUpSquares(){
	for(var i = 0; i < squares.length; i++){
		//add click listeners to squares
		squares[i].addEventListener("click", function(){
			//grab color of clicked square
			var clickedColor = this.style.backgroundColor;
			//compare color to pickedColor
			if(clickedColor === pickedColor){
				messageDisplay.textContent = "Correct!";
				resetButton.textContent = "Play Again?";
				changeColors(clickedColor);
				h1.style.backgroundColor = clickedColor;
			} else {
					this.style.backgroundColor = "#232323"
					messageDisplay.textContent = "Try Again"
				}
		});
	}
}


function reset(){
	colors = generateRandomColors(numSquares);
	//pick a new random color from array
	pickedColor = pickColor();
	//change colorDisplay to match picked color
	colorDisplay.textContent = pickedColor;

	messageDisplay.textContent = "";
	//change the colors of squares
	for(var i = 0; i < squares.length; i++){
		if(colors[i]){
			squares[i].style.display = "block";
			squares[i].style.background = colors[i];
		} else {
			squares[i].style.display = "none";
		}
		
	}
	h1.style.backgroundColor = "steelblue";
	resetButton.textContent = "New Colors";
}

// easyBtn.addEventListener("click", function(){
// 	easyBtn.classList.add("selected");
// 	hardBtn.classList.remove("selected");
// 	numSquares = 3;
// 	colors = generateRandomColors(numSquares);
// 	pickedColor = pickColor();
// 	colorDisplay.textContent = pickedColor;
// 	for(var i = 0; i < squares.length; i++){
// 		if(colors[i]){
// 			squares[i].style.backgroundColor = colors[i]
// 		}
// 		else {
// 			squares[i].style.display = "none";
// 		}
// 	}
// })

// hardBtn.addEventListener("click", function(){
// 	hardBtn.classList.add("selected");
// 	easyBtn.classList.remove("selected");
// 	numSquare = 6;
// 	colors = generateRandomColors(numSquares);
// 	pickedColor = pickColor();
// 	colorDisplay.textContent = pickedColor;
// 	for(var i = 0; i < squares.length; i++){
// 			squares[i].style.backgroundColor = colors[i]
// 			squares[i].style.display = "block";
// 	}
// })


resetButton.addEventListener("click", function(){
	reset();
	// //generate all new colors
	// colors = generateRandomColors(numSquares);
	// //pick a new random color from array
	// pickedColor = pickColor();
	// //change colorDisplay to match picked color
	// colorDisplay.textContent = pickedColor;

	// messageDisplay.textContent = "";
	// //change the colors of squares
	// for(var i = 0; i < squares.length; i++){
	// 	squares[i].style.background = colors[i];
	// }
	// h1.style.backgroundColor = "steelblue";
	// this.textContent = "New Colors";
})


function changeColors(color){
	//loop through all squares
for(var i = 0; i < squares.length; i++){
	//change each color to match given color
	squares[i].style.backgroundColor = color;
	}
}


function pickColor(){
	var random = Math.floor(Math.random() * colors.length)
	//Math.floor - убирает дробную часть после числа, число будет целым.
	//Math.random - генератор случайных чисел, а * 6 - предел, до которого
	// будет работать генератор случайных чисел
	return colors[random];
}


function generateRandomColors(num){
	//make an array
	var arr = [];
	//repeat num times
	for(var i = 0; i < num; i++){
		//get random color and push into arr
		arr.push(randomColor())
		
	}
	//return that array
	return arr;
}

function randomColor(){
	//pick a "red" from 0 to 255
	var r = Math.floor(Math.random() * 256);
	//pick a "green" from 0 to 255
	var g = Math.floor(Math.random() * 256);
	//pick a "blue" from 0 to 255
	var b = Math.floor(Math.random() * 256);
	return "rgb(" + r + ", " + g + ", " + b + ")";
}