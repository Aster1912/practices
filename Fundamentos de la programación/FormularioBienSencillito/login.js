function loginUsuario(){
    var usu = document.getElementById('usu').value; //Metodo antiguo
    let pass = document.querySelector('#pass').value; //Metodo nuevo
    const usuario = "asteri";
    const password = "123456";
if(usu == usuario){
    if(pass == password){
        window.location.replace("home.html");
    }else{
        alert("Contraseña Incorrecta, Intente de Nuevo.");
    }
}else{
    alert("Usuario Incorrecto, Intente de Nuevo.");
}
};