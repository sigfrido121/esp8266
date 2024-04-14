#include <ESP8266WiFi.h>  //provee rutinas wifi que vamos a utilizar

//definimos parametros a utilizar
//utilizamos punteros a caracteres constantes permite que 
//el programa tenga acceso a los datos de la cadena sin poder 
//modificarlos accidentalmente
//const char* ssid = "iPhone de Alex";  //ssid => identificador de conjunto de servicios
//const char* password = "00000000";
const char* ssid = "EXT_EXT";
const char* password = "9144A4D13D493F27516C23A1F7";

void setup() {
  Serial.begin(115200);

  //nos conectamos al wifi
  WiFi.begin(ssid, password);
  //verificamos la coneccion
  while (WiFi.status() != WL_CONNECTED){
    /*Wifi.status() devuelve varios codigos utiles acerca del estado de nuestro 
    intento de coneccion
    0: WL_IDLE STAUTS ==> el proceso wifi esta cambiando entre un estado y otro
    1: WL_NO_SSID_AVAIL
    3: WL_CONNECTED
    4: WL_CONNECTE_FAILED
    6: WL_DISCONNECTED ==> cuando el modulo no esta en modo estacion*/
    delay(300);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("wifi conectado");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
