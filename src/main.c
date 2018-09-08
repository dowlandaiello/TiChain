/* Keep these headers */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* Standard headers */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Put function prototypes here */
void printText(const char *text);
void printTextSmall(const char *text, uint8_t xpos, uint8_t ypos);
char *scanText(char *inputPlaceholder);

typedef struct {
    char data[256];
    int prevHash;
    int hash;
    int nonce;
}Block;

/* Put all your code here */
int main(void) {
    /* uint8_t is an unsigned integer that can range from 0-255. */
    /* It performs faster than just an int, so try to use it (or int8_t) when possible */
    uint8_t count;

    /* Initialize some strings */

    char *Input = "Input: ";

    /* Initialize buffer */
    char *Buf;

    const char *Option0 = "0. New Chain";
    const char *Option1 = "1. Start Mining";
    const char *Option2 = "2. Generate Wallet";
    const char *Option3 = "3. Send Transaction";

    const char *Option0Cnp = "0";
    const char *Option1Cnp = "1";
    const char *Option2Cnp = "2";
    const char *Option3Cnp = "3";

    /* Init buf size */
    size_t bufsize = 10000;

    /* Clear the homescreen */
    os_ClrHome();

    printText(Option1);
    printText(Option2);
    printText(Option3);
    
    os_GetStringInput(Input, Buf, bufsize);

    if (*Buf == *Option0Cnp) {
        Block genesis;
        strcpy(genesis.data, "Genesis");
        prevHash = 0;
    } else if (*Buf == *Option1Cnp) {

    } else if (*Buf == *Option2Cnp) {

    } else if (*Buf == *Option3Cnp) {

    }

    while(!os_GetCSC());

    return 0;
}

int hash(char data[]) {
    
}

/* Draw text on the homescreen at the given X/Y location */
void printText(const char *text) {
    os_PutStrFull(strcat("\n", text));
}

/* Draw small text at the given X/Y location */
void printTextSmall(const char *text, uint8_t xpos, uint8_t ypos) {
    os_FontSelect(0); // sets small font (1 == big, see docs)
    os_FontDrawText(text, xpos, ypos);
}

char *scanText(char *inputPlaceholder) {
    /* Initialize buffer */
    char *Buf;

    /* Init buf size */
    size_t bufsize = 100;

    /* Fetch input*/
    os_GetStringInput(inputPlaceholder, Buf, bufsize);

    return Buf;
}