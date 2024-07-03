function changeSize( option ){
    let classes = ['width-200', 'width-300', 'width-400', 'width-500', 'width-default'];
    let buttons = ['200', '300', '400', '500', '100'];
    let box = document.getElementById('content-box');

    for( let i = 0; i < classes.length; i++ ){
        let btn = document.getElementById(buttons[i]);
        
        box.classList.remove(classes[i]);
        btn.classList.remove('selected');
    }

    box.classList.add(classes[option]);
    document.getElementById(buttons[option]).classList.add('selected');
}