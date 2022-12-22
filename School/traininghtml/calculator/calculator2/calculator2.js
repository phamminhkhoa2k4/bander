let a = "";
let b = "";
let c;

function button(btn) {
    const pressedValue = btn.innerText;
    const resultInput = document.getElementById("resultInput");

    if(isNaN(pressedValue)) {
        if(pressedValue == "C") {
            a = "";
            b = "";
            c = undefined;
            resultInput.value = "";
            return;
        }
        if (pressedValue == "=") {
            const result = khoa(a,b,c);
            resultInput.value = result;
            a = "" ;
            b = "" ;
            c = undefined;
        }else {
            c = pressedValue;
        }
    } else {
        if(c) {
            b += pressedValue;
            resultInput.value = b;
        } else {
            a += pressedValue;
            resultInput.value = a;
        }
    }
}

function khoa(A,B,C) {
    A = Number(A)
    B = Number(B)

    switch(C)
    {
        case '+':
            return A + B
        case '-':
            return A - B
        case 'x':
            return A * B
        case ':':
            return A / B
    }
}