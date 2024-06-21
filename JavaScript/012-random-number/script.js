function generateNumber(){
    let element = document.getElementById('random-number');
    let number = parseInt(Math.random() * 1000);

    element.textContent = `The number is: ${number}`;
}