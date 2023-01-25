//Programa quee pida el nombre y la edad, si la edad esta entre 18 y 25 que diga que esta en el rango, que diga si es mayor o menor al rango , y si su edad es 100 años que diga que ya no puede jugar con legos ("nombreDelUsuario tiene edad años, mensaje")

let nombre = "";
let edad = 0;
let rango = "";

do{
    nombre = prompt("Escriba su nombre");
    if(nombre == ""){
        alert("No deje este espacio vacio");
    }
}while(nombre == "");
do{
    edad = Number(prompt("Escriba su edad"));
    if(edad <= 0  && (typeof(age) == NaN)){
        alert("Escriba una edad real");
    }
}while(edad <= 0 && (typeof(age) == NaN))

if(edad < 18){
    rango = " es menor al rango";
}else if(edad >= 17 && edad <26){
    rango = " esta dentro del rango";
}else if(edad < 100){
    rango = " es mayor al rango";
}else{
    rango = " ya no puede jugar con legos";
}

alert(nombre + " tiene " + edad + " años, " + rango);