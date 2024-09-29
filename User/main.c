/*********************************************** HEADERS ********************************************
 * File Name          : main.c
 * Author             : Rueslei Santos
 * Version            : 1.0.0
 * Date               : 29/09/2024
 * Description        : Template personalizado para desenvolvimento de firmware do microcontrolador.
 * Microcontrolador   : CH32V003F4P6
/****************************************************************************************************/

/* Global define/includes */
#include "debug.h"

/****************************************************************************************************/

/* Global Variables */
/****************************************************************************************************/

/* Function prototypes */

void Mcu_Init(void);                                    // Configura os perif¨¦ricos dos microcontrolador
void Gpio_Init(void);                                   // Configura as portas de GPIO

/****************************************************************************************************/
/* Main Function */
int main(void)
{
    Mcu_Init();
    for (;;) // or while(1)
    {

    }
}
/****************************************************************************************************/
/* Function definitions */

void Mcu_Init(void)
{
    Gpio_Init();
}

void Gpio_Init(void)
{
    GPIO_InitTypeDef Gpio_InitStructure = {0};                  // Declaro e inicializo todos os elementos da estrutura com 0

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);       // Habilita o clock do GPIOD

    Gpio_InitStructure.GPIO_Pin = GPIO_Pin_0;                   // Quero usar PD0
    Gpio_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;            // Configura a saida em push-pull
    Gpio_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;           // Configura como high speed

    GPIO_Init(&GPIOD, Gpio_InitStructure);                      // Configura o portd com os dados acima
}
/****************************************************************************************************/
