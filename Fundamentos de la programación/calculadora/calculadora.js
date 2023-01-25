function Sumar(num1, num2){
    let res = 0;
    res = num1 + num2;
    return res;
};

function Restar(num1, num2){
    let res = 0;
    res = num1 - num2;
    return res;
};

function Multiplicar(num1, num2){
    let res = 0;
    res = num1 * num2;
    return res;
};

function Dividir(num1, num2){
    let res = 0;
    while(num2 < 1){
        alert("El divisor no debe ser menor de 1");
        num2 = Number(prompt("Ingrese el número 2:"));
    }
    res = num1 / num2;
    return res;
};

//System
let n1 = 0;
let n2 = 0;
let op = 0;
let opc = 0;

n1 = Number(prompt("Ingrese el número 1:"));
n2 = Number(prompt("Ingrese el número 2:"));
let menu = "Elija una opción:\n";
menu += "1. Suma\n";
menu += "2. Resta\n";
menu += "3. Multiplicación\n";
menu += "4. División\n";

do{
    opc = Number(prompt(menu));
    switch(opc){
        case 1:
            op = Sumar(n1, n2);
            break;
        case 2:
            op = Restar(n1, n2);
            break;
        case 3:
            op = Multiplicar(n1, n2);
            break;
        case 4:
            op = Dividir(n1, n2);
            break;
        default:
            alert("Opción incorrecta");
            break;
    }
}while((opc < 1) || (opc > 4));

alert("El resulato es: " + op);