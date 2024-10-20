
#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
#include <cstdlib>
#include <cctype>  // Para isalpha() e isdigit()

// Función para validar que la cadena contiene solo letras
bool esSoloLetras(const std::string& str) {
    for (char c : str) {
        if (!isalpha(c)) {  // Si el carácter no es una letra
            return false;
        }
    }
    return true;
}

// Función para validar que la cadena contiene solo números
bool esSoloNumeros(const std::string& str) {
    for (char c : str) {
        if (!isdigit(c)) {  // Si el carácter no es un dígito
            return false;
        }
    }
    return true;
}
int main()
{
setlocale(LC_ALL, "es_MX.UTF-8");
//Realizaremos un login para un juego que se llamara "El mecostragas"

//Vamos a definir las variables
std::string nombrejugador,correo,contrasena;

// Pedimos al jugador sus datos papus
std::cout << "Por favor introduce tu nombre: ";
std::getline(std::cin, nombrejugador); // Usamos getline para permitir entradas vacías
 std::string correoCorrecto = "aronpazcar";   // Usuario correcto
    std::string contrasenaCorrecta = "190506";  // Contraseña correcta
    setlocale(LC_ALL, "es_MX.UTF-8");
   

    // Ingreso del correo
    std::cout << "Ingrese su nombre de correo : ";
    std::getline(std::cin, correo);

    // Validar si el nombre del correo contiene solo letras
    if (!esSoloLetras(correo)) {
        std::cout << "Error: El nombre del correo es erroneo ." << std::endl;
        return 1;  // Salir con error
    }

    // Ingreso de la contraseña
    std::cout << "Ingrese su contraseña : ";
    std::getline(std::cin, contrasena);

    // Validar si la contraseña contiene solo números
    if (!esSoloNumeros(contrasena)) {
        std::cout << "Contraseña incorrecta muajajaja " << std::endl;
        return 1;  // Salir con error
    }


if (nombrejugador.empty() || correo.empty() || contrasena.empty()) {
std::cout << "Ingresaste un dato incorrecto o no se reconoce papu, pal lobbyyyy." << std::endl; 
return 1;
}else {
std::cout << "Registro Exitoso. ¡Gracias por ser un mecoso extra! " << std::endl;     
}

//Ahora Vamos a verificar si es mayor de edad 
int edad;
std::cout << "Porfavor ingresa tu edad: ";
std::cin >> edad;
if (edad < 18){
std::cout << "Aquí no es kinder para que jueges." << std::endl;
}
if (edad >= 18){ 
std::cout << "Bienvenido hermano, todo un alfa" << std::endl;
}


//Ahora vamos a hacer 5 opciones de descisiones para el jugador

// Definimos la variable para la dificultad
std::string dificultad;

// Pedimos al jugador que elija una dificultad
std::cout << "Dime brotheer, ¿qué dificultad quieres jugar? (Facil, Media o Hardcore): ";
std::cin >> dificultad;


if (dificultad == "Facil" || dificultad == "facil") {
std::cout << "mariquitaaaa jajaja" << std::endl;
}
else if (dificultad == "Media" || dificultad == "media") {
std::cout << "Eso bro, hay bolas!" << std::endl;
}
else if (dificultad == "Hardcore" || dificultad == "hardcore") {
std::cout << "De seguro eres un sudoroso" << std::endl;
}


//Opciones de personaje
//Definir Variables
std::string personaje;
//Pedimos al jugador que eliga su personaje
std::cout << "Porfavor elige un personaje (Light Y, Abraham L, Cbum): " << std::endl;
std::cin >> personaje;
//Convertimos la entrada a minisculas si es necesario 
if (personaje == "Light Y" || personaje == "Light Y") {
std::cout << "Has escogido a Light Y un personaje intelectual, introvertido, analitico y audaz con un IQ de 164, estudio en harvard y tiene maestria en criminologia" << std::endl;     
}
else if (personaje == "Abraham L" || personaje == "Abraham L") {
std::cout << "Abogado penalista con especialidad en delicuencia organizada, le gustan los deportes extremos y es alcoholico y drogadicto con una adiccion al dinero, es liberalista" << std::endl;
}
else if (dificultad == "Cbum" || dificultad == "Cbum") {
std::cout << "Atletico con acento ingles con un posgrado en filosofia, es fisicoculturista y su mascota es un hammster asesino" << std::endl;
}

//Opcion escoger tu arma
//Definir Variable
std::string arma;
//Pedimos que eliga su arma
std::cout << "Porfavor elige tu arma para masacrar a los zombies del tapanko (Espadas del chaos, Martillo chillon, Raygun): " << std::endl;
std::cin >> arma;
//Convertimos la entrada a minisculas si es necesario 
if (arma == "Espadas del chaos" || arma == "Espadas del chaos") {
std::cout << "Mmm, Te gusta lo facil" << std::endl;
}
else if (arma == "Martillo chillon" || arma == "Martillo chillon") {
std::cout << "Eso bro, Estas bien crazy loco" << std::endl;
}
else if (dificultad == "Raygun" || dificultad == "raygun") {
std::cout << "Ufff a destrozar muertitos" << std::endl;
}

//Opcion Rol
// Definir variable 
std::string rol;
// Pedimos al jugador que elija su rol
std::cout << "Por favor elige tu rol para la batalla: (Espartano, Mago, Sniper): " << std::endl;
std::cin >> rol;
// Convertimos la entrada a minúsculas
if (rol == "Espartano" || rol == "Espartano") {
std::cout << "Has elegido al Espartano, la fuerza bruta te llevará a la victoria." << std::endl;
}
else if (rol == "Mago" || rol == "mago") {
std::cout << "Has elegido al Mago, el poder de los elementos está de tu lado." << std::endl;
}
else if (rol == "Sniper" || rol == "Sniper") {
std::cout << "Has elegido al Sniper, tu precisión será letal en la distancia." << std::endl;
}

//Opcion empezar o no
// Definir variable 
std::string empezar;
// Preguntamos al jugador si desea empezar
std::cout << "¿Deseas empezar el juego? (si/no): ";
std::cin >> empezar;
// Verificamos la respuesta del jugador
if (empezar == "si" || empezar == "Si" || empezar == "SI") {
std::cout << "¡Excelente! Iniciando el desmadre..." << std::endl;
} 
else if (empezar == "no" || empezar == "No" || empezar == "NO") {
std::cout << "Está bien, maldito feka." << std::endl;

return 0;
}

}