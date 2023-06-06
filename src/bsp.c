#include "mybsp.h"



static pinGPIO const pin_digitos[3] = {
    [0]  = {.puerto=DIGIT_1_PORT,.pin=DIGIT_1_PIN ,.numRegistroGPIO = DIGIT_1_GPIO, .bitRegistroGPIO = DIGIT_1_BIT,  .funcion = DIGIT_1_FUNC},
    [1]  = {.puerto=DIGIT_2_PORT,.pin=DIGIT_2_PIN ,.numRegistroGPIO = DIGIT_2_GPIO, .bitRegistroGPIO = DIGIT_2_BIT,  .funcion = DIGIT_2_FUNC},
    [2]  = {.puerto=DIGIT_3_PORT,.pin=DIGIT_3_PIN ,.numRegistroGPIO = DIGIT_3_GPIO, .bitRegistroGPIO = DIGIT_3_BIT,  .funcion = DIGIT_3_FUNC},
    [3]  = {.puerto=DIGIT_4_PORT,.pin=DIGIT_4_PIN ,.numRegistroGPIO = DIGIT_4_GPIO, .bitRegistroGPIO = DIGIT_4_BIT,  .funcion = DIGIT_4_FUNC},
}

static pinGPIO const pin_segmentos[6] = {
    [0]  = {.puerto=SEGMENT_A_PORT,.pin=SEGMENT_A_PIN ,.numRegistroGPIO = SEGMENT_A_GPIO, .bitRegistroGPIO = SEGMENT_A_BIT,  .funcion = SEGMENT_A_FUNC},
    [1]  = {.puerto=SEGMENT_B_PORT,.pin=SEGMENT_B_PIN ,.numRegistroGPIO = SEGMENT_B_GPIO, .bitRegistroGPIO = SEGMENT_B_BIT,  .funcion = SEGMENT_B_FUNC},
    [2]  = {.puerto=SEGMENT_C_PORT,.pin=SEGMENT_C_PIN ,.numRegistroGPIO = SEGMENT_C_GPIO, .bitRegistroGPIO = SEGMENT_C_BIT,  .funcion = SEGMENT_C_FUNC},
    [3]  = {.puerto=SEGMENT_D_PORT,.pin=SEGMENT_D_PIN ,.numRegistroGPIO = SEGMENT_D_GPIO, .bitRegistroGPIO = SEGMENT_D_BIT,  .funcion = SEGMENT_D_FUNC},
    [4]  = {.puerto=SEGMENT_E_PORT,.pin=SEGMENT_E_PIN ,.numRegistroGPIO = SEGMENT_E_GPIO, .bitRegistroGPIO = SEGMENT_E_BIT,  .funcion = SEGMENT_E_FUNC},
    [5]  = {.puerto=SEGMENT_F_PORT,.pin=SEGMENT_F_PIN ,.numRegistroGPIO = SEGMENT_F_GPIO, .bitRegistroGPIO = SEGMENT_F_BIT,  .funcion = SEGMENT_F_FUNC},
    [6]  = {.puerto=SEGMENT_G_PORT,.pin=SEGMENT_G_PIN ,.numRegistroGPIO = SEGMENT_G_GPIO, .bitRegistroGPIO = SEGMENT_G_BIT,  .funcion = SEGMENT_G_FUNC},
}

static pinGPIO const pin_ACEPTAR = 
{.puerto=KEY_ACCEPT_PORT,.pin=KEY_ACCEPT_PIN ,.numRegistroGPIO =KEY_ACCEPT_GPIO, .bitRegistroGPIO = KEY_ACCEPT_BIT,  .funcion = KEY_ACCEPT_FUNC};
static pinGPIO const pin_CANCELAR = 
{.puerto=KEY_CANCEL_PORT,.pin=KEY_CANCEL_PIN ,.numRegistroGPIO =KEY_CANCEL_GPIO, .bitRegistroGPIO = KEY_CANCEL_BIT,  .funcion = KEY_CANCEL_FUNC};
static pinGPIO const pin_KEY_F1 = 
{.puerto=KEY_F1_PORT,.pin=KEY_F1_PIN ,.numRegistroGPIO =KEY_F1_GPIO, .bitRegistroGPIO = KEY_F1_BIT,  .funcion = KEY_F1_FUNC};
static pinGPIO const pin_KEY_F2 = 
{.puerto=KEY_F2_PORT,.pin=KEY_F2_PIN ,.numRegistroGPIO =KEY_F2_GPIO, .bitRegistroGPIO = KEY_F2_BIT,  .funcion = KEY_F2_FUNC};
static pinGPIO const pin_KEY_F3 = 
{.puerto=KEY_F3_PORT,.pin=KEY_F3_PIN ,.numRegistroGPIO =KEY_F3_GPIO, .bitRegistroGPIO = KEY_F3_BIT,  .funcion = KEY_F3_FUNC};
static PinGPIO const pin_KEY_F4 = 
{.puerto=KEY_F4_PORT,.pin=KEY_F4_PIN ,.numRegistroGPIO =KEY_F4_GPIO, .bitRegistroGPIO = KEY_F4_BIT,  .funcion = KEY_F4_FUNC};



static Poncho poncho;


Poncho * iniciarPoncho(void){
    configPin(&pin_digitos[0],SALIDA);
    configPin(&pin_digitos[1],SALIDA);
    configPin(&pin_digitos[2],SALIDA);   
    configPin(&pin_digitos[3],SALIDA);
    configPin(&pin_segmentos[0],SALIDA);
    configPin(&pin_segmentos[1],SALIDA);
    configPin(&pin_segmentos[2],SALIDA);   
    configPin(&pin_segmentos[3],SALIDA);
    configPin(&pin_segmentos[4],SALIDA);
    configPin(&pin_segmentos[5],SALIDA);   
    configPin(&pin_segmentos[6],SALIDA);
    
    configPin(&pin_ACEPTAR,SALIDA);
    configPin(&pin_CANCELAR,SALIDA);
    configPin(&pin_KEY_F1,SALIDA);
    configPin(&pin_KEY_F2,SALIDA);
    configPin(&pin_KEY_F3,SALIDA);
    configPin(&pin_KEY_F4,SALIDA);
    return &poncho;
}



char getDisplay     (Display * display, uint8_t digito) 
{

}
void writeDisplay   (Display * display, uint8_t digito, char caracter) 
{

}
bool leerBoton (pinGPIO pin)
{

}
void drawDisplay(void){
    
    for (i=0;i<=3;i++){
        

    }
    
    
    
    for (i=0;i<=3;i++)
    {writePin(&pin_digitos[0],0);}
    for (i=0;i<=6;i++)
    {writePin(&pin_segmentos[0],0);}

}