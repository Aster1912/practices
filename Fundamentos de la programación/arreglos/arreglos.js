//Variables
let nums = new Array(10);
let palabras = ["hola", "mundo"];

function Captura(){
    for(let i = 0; i < nums.length; i++){
        nums[i] = Number(prompt("Dame el número " + (i+1)));
    }
}

function Mostrar(){
    let arreglo = "";
    for(let i = 0; i < nums.length; i++){
        arreglo += " " + nums[i];
    }
    alert(arreglo);
}

Captura();
Mostrar();