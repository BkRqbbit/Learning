function hypotenuse(){
    let adjacent = Number(prompt("Enter the adjacent value"));
    let opposite = Number(prompt("Enter the opposite value"));
    let result;

    console.log(adjacent, opposite);

    if( isNaN(adjacent) || isNaN(opposite) ){
        console.error("Invalid data!");
        console.error("Try again (refresh)");
        return;
    }

    result = Math.sqrt(adjacent**2 + opposite**2);

    console.log("The value of the hypotenuse is " + result)
}

hypotenuse();