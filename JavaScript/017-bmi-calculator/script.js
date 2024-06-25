function calculateBMI(){
    let element = document.getElementById('message');
    let weight = Number(prompt("Enter your weight in kilograms"));
    let height = Number(prompt("Enter your height in meters"));
    let bmi;

    if( isNaN(height) || isNaN(weight) ){
        element.textContent = "Invalid data [Refresh the page]";
        return;
    }

    bmi = weight / ( height**2 );
    element.textContent = `Your BMI is ${bmi}`;
}

calculateBMI();