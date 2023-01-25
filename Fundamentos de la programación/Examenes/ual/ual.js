//Variables
let posAct = 0;
let pasos = 0;
let opc = 0;
let lugar = "";

//Principal
do{
    opc = Number(prompt("===Bienvenido/a===\n1. Donde estoy?\n2. Moverme\n3. Salir\nSelecciona una opción (1-3)"));
    switch(opc){
        case 1:
            LugarActual();
            break;
        case 2:
            let place = Lugares();
            Moverse(place);
            break;
        case 3:
            alert("Hasta luego!");
            break;
        default:
            alert("Opción incorrecta");
            break;
    }
}while(opc != 3);

//Funciones
function Lugares(){
    let opt = 0;
    let menuDest = "===Destinos===\n"
    menuDest += "1. CIP\n";
    menuDest += "2. CTA\n";
    menuDest += "3. Edificio A\n";
    menuDest += "4. Edificio B\n";
    menuDest += "5. Cafetería\n";
    menuDest += "Ingrese una opción (1-5)";
    do{
        opt = Number(prompt(menuDest));
        if(opt < 1 || opt > 5){
            alert("Escriba un número en el rango");
        }
    }while(opt < 1 || opt > 5);
    return opt;
}

function LugarActual(){
    switch(posAct){
        case 1:
            lugar = "CIP";
            break;
        case 2:
            lugar = "CTA";
            break;
        case 3:
            lugar = "Edificio A";
            break;
        case 4:
            lugar = "Edificio B";
            break;
        case 5:
            lugar = "Cafetería";
            break;
    }
    if(lugar != ""){
        alert("Actualmente estas ubicado/a en " + lugar + "\nHas dado " + pasos + " pasos");
    }else{
        alert("No estas en UAL");
    }
}

function Moverse(dest){
    if(posAct == dest){
        alert("Ya estás en este lugar");
    }else{
        pasos += 10;
        posAct = dest;
        LugarActual();
    }
}