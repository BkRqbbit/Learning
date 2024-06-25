function milesConverter(){
    let miles = Number(prompt("Enter the value in miles to convert"));
    let kilometers;
    let element = document.getElementById('message');

    if( isNaN(miles) ){
        element.textContent = "Invalid Data! (Reload the page)";
        return;
    }

    kilometers = 1.60934 * miles;
    element.textContent = `The distance of ${miles}miles is equal to ${kilometers}km`;
}

milesConverter();