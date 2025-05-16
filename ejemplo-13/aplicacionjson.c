#include<stdio.h>
#include<stdlib.h>
#include<cjson/cJSON.h>

cJSON* procesarJSON(cJSON * entrada){
	cJSON * respuesta = cJSON_CreateObject(); // Crea un objeto cJSON vacio
	cJSON * mensaje = cJSON_GetObjectItem(entrada, "mensaje"); // Traigo el elemento mensaje
	if(mensaje != NULL){ // Si mensaje existe
		// Le agrego el texto de mensaje a el elemento mensaje_original al objeto respuesta
		cJSON_AddItemToObject(respuesta, "mensaje_original", cJSON_Duplicate(mensaje, 1));
	}
	return respuesta;
}

int main(){
	// Creamos un JSON string de entrada
	char * json_String = "{\"mensaje\": \"Este es el mensaje original\"}";
	cJSON* objJsonEntrada = cJSON_Parse(json_String);
	if(objJsonEntrada == NULL){ // Si el objeto JSON no se decodifico bien
		printf("Error en la decodificacion del JSON\n");
		return -1;
	}
	cJSON * respuesta = procesarJSON(objJsonEntrada); // Modificamos el JSON de entrada
	char * cadena = cJSON_Print(respuesta); // Convertimos el objeto JSON en una cadena
	printf("El JSON es: %s\n", cadena); // Imprimimos la cadena correspondiente al JSON
	cJSON_Delete(respuesta); // Liberamos memoria del objeto que ya no es necesario
	cJSON_Delete(objJsonEntrada); // Liberamos memoria del objeto que ya no es necesario
	free(cadena);
	return 0;
}
