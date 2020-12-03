

function MostrarHora() {
    document.getElementById('demo').innerHTML = Date();

    document.getElementById('title1').innerHTML = "Hola desde MostrarHora!";


    var elements = document.getElementsByClassName("t1");

    for(var i = 0; i < 3; i++){

        elements[i].innerHTML = "Esto se estableció en el for loop!"
    }
    var i = 0;
    do{
        console.log(i);
        i++;
    }while(i < 50)

    if(1 == 1){
        console.log("1 es igual a 1")
    }else{
        console.log("1 no es igual a 1")
    }

}


function MostrarHoraConjQuery (){
    // JQuery es un SUPERSET de JavaScript
    $(".t1").html("Hola desde MostrarHoraConjQuery! ")

    $("#demo").html(Date());
}