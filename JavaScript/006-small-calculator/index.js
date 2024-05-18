function performOperations(){
    let x = Number(window.prompt("Enter value of x: "));
    let y = Number(window.prompt("Enter value of y: "));
    let result;
    let element;

    result = x + y;
    element = document.getElementById("addition");
    element.textContent = result;

    result = x - y;
    element = document.getElementById("substraction");
    element.textContent = result;

    result = x * y;
    element = document.getElementById("multiplication");
    element.textContent = result;

    result = x / y;
    element = document.getElementById("division");
    element.textContent = result;

    result = x ** y;
    element = document.getElementById("exponent");
    element.textContent = result;

    result = x % y;
    element = document.getElementById("modulo");
    element.textContent = result;
}