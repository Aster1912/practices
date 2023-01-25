//Variables
let pica = 0;
let chicha = 0;
let queso = 0;
let asado = 0;
let moro = 0;
let opc = 0;
let sabor = "";

//Entrada
let msg = "Bienvenido/a\n";
msg += "Seleccione una opción (1-6):\n";
msg += "1. Picadillo\n";
msg += "2. Chicharrón\n";
msg += "3. Queso\n";
msg += "4. Asado\n";
msg += "5. Morongo\n";
msg += "6. Salir";

//Procesamiento
do{
    opc = Number(prompt(msg));
    switch(opc){
        case 1: //Pica
            sabor = "Picadilo";
            pica++;
            break;
        case 2: //Chicha
            sabor = "Chicharrón";
            chicha++;
            break;
        case 3: //Queso
            sabor = "Queso";
            queso++;
            break;
        case 4: //Asado
            sabor = "Asado";
            asado++;
            break;
        case 5: //Moro
            sabor = "Morongo";
            moro++;
            break;
        case 6: //Salir
            break;
        default:
            alert("Escriba un número en el rango 1-6")
            break;
    }
    if(opc < 6){
        alert("Usted escogió " + sabor)
    }
}while(opc != 6);

//Salidas
let total = pica + chicha + queso + asado + moro;
let exit = "El conteo de gorditas es:\n";
exit += pica + " de Picadillo\n";
exit += chicha + " de Chcharrón\n";
exit += queso + " de Queso\n";
exit += asado + " de Asado\n";
exit += moro + " de Morongo\n";
exit += "El total de gorditas pedidas es: " + total;
alert(exit);