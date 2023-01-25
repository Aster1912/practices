let cal = 0;
cal = Number(prompt("Escriba su calificación"));
if((cal >= 0) && (cal <= 100)){
    if(cal > 69){
        if(cal > 80){
            if(cal > 90){
                alert("Excelente");
            }else{
                alert("Muy bueno");
            }
        }else{
            alert("Bueno");
        }
    }else{
        alert("Reprobado");
    }
}else{
    alert("La calificación no está en el rango");
}