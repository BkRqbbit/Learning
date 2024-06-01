function showAge(){
    let age = document.getElementById('age').value;
    let string_age = document.getElementById('show-age');
    let number_age = document.getElementById('show-new-age');

    let converted_age = Number(age);

    age += 1;
    
    string_age.textContent = age;
    number_age.textContent = converted_age;
}