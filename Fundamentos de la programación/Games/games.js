//Constantes
const eldenRing = 1700;
const minecraft = 300;
const rainbowSixSage = 800;
const doomEternal = 1500;
const theLegendOfZeldaOcarinaOfTime = 300;
const theLastOfUs2 = 1200;
const iva = 0.16;

//Variables
let opc = 0;
let subtotal = 0;
let cont = 0;
let ivaTotal = 0;
let total = 0;

do{
    //Entrada
    opc = Number(prompt("Bienvenido/a a GameGalaxy\n\nMenu\n1. Elden Ring - $1700mxn\n2. Minecraft - $300mxn\n3. Rainbow Six Sage - $800mxn\n4. Doom Eternal - $1500mxn\n5. The Legend Of Zelda: Ocarina of Time - $300mxn\n 6. The Last Of Us 2 - $1200mxn\n7. Salir\n\nSeleccione la opción 1-7"));

    //Procesar
    switch(opc){
        case 1:
            alert("Usted eligio Elden Ring");
            subtotal += eldenRing;
            cont++;
            break;
        case 2:
            alert("Usted eligio Minecraft");
            subtotal += minecraft;
            cont++;
            break;
        case 3:
            alert("Usted eligio Rainbow Six Sage");
            subtotal += rainbowSixSage;
            cont++;
            break;
        case 4:
            alert("Usted eligio Doom Eternal");
            subtotal += doomEternal;
            cont++;
            break;
        case 5:
            alert("Usted eligio The Legend of Zelda: Ocarina of Time");
            subtotal += theLegendOfZeldaOcarinaOfTime;
            cont++;
            break;
        case 6:
            alert("Usted eligio The Last Of Us 2");
            subtotal += theLastOfUs2;
            cont++;
            break;
        case 7:
            alert("Generando ticket...")
        break;
        default:
            alert("Opcion incorrecta, intente de nuevo")
            break;
    }
}while(opc != 7);

ivaTotal = subtotal * iva;
total = ivaTotal + subtotal;

//Salida
let msg = "Su cuenat es:\n"
msg += "Cantidad de Juegos: " + cont + "\n";
msg += "Subtotal: " + subtotal + "\n";
msg += "IVA: " + ivaTotal + "\n";
msg += "Total: " + total;
alert(msg)