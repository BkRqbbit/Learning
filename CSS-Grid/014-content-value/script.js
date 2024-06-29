function changeBox( choosen ){
    let classes = ['min-content', 'max-content', 'fit-content'];
    let buttons = ['min', 'max', 'fit'];
    let box = document.getElementById('text-box');

    for( let x = 0; x < classes.length; x++ ){
        let btn = document.getElementById(buttons[x]);

        box.classList.remove(classes[x]);
        btn.classList.remove('selected');
    }

    let btn = document.getElementById(buttons[choosen]);
    box.classList.add(classes[choosen]);
    btn.classList.add('selected');
}