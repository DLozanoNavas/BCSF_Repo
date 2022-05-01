var app = angular.module("njst", [])

app.controller("gatitos", function($scope, $http){
    $scope.Gatos = [
        {
            "_id": "123",
            "name": "Alan"
        },
        {
            "_id": "456",
            "name": "Pelusas"
        },
        {
            "_id": "789",
            "name": "Garfield"
        },
    ]

    $scope.gato = {    }

    // Crear función que limpie el nombre del nuevo gatito
    var ActualizarUI = function(){
        $http.get("/MostrarGatitos").then(function (response) {
            $scope.Gatitos = response.data;
            $scope.gato.name = "";
        })
    }

    ActualizarUI()
    

    $scope.Agregar = function (){
        $http.post("/CrearGatito", $scope.gato).then(function (response){
            console.log(response)
            ActualizarUI()
        })
    }

    $scope.Actualizar = function (id){
        $http.get("/ObtenerGatito/" + id, $scope.gato).then(function (response){
            $scope.Gato = response.data;
        })
    }
    
    $scope.Borrar = function (id){
        $http.delete("/BorrarGatito/" + id ).then(function(respose){
            console.log(response)
            ActualizarUI()
        })
    }


})