#include <Arduino.h>
//error 3221225781 preference
//micronucleus was not downloaded correctly. 
//"libusb0.dll" may be missing.
//https://github.com/micronucleus/micronucleus/releases/download/v2.6/micronucleus-cli-master-882e7b4a-x86_64-MINGW64_NT-10.0-17763.zip
//https://www.youtube.com/watch?v=NiRAF8N1JBU&t=157s

//boot loader
//https://github.com/overfl0/NocInformatykaBoard/blob/master/upgrade/releases/micronucleus-1.11-entry-jumper-pb0-upgrade.hex

# include <DigiKeyboard.h>

void DigikeyboardWrite(String line, int time){
    DigiKeyboard.print(line);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(time);
}

void setup() {
    pinMode(1, OUTPUT);
    digitalWrite(1, true);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigikeyboardWrite("cmd", 1200);
    DigikeyboardWrite("md BADUSB", 750);
    DigikeyboardWrite("cd BADUSB", 750);
    DigikeyboardWrite("dir>>Hello.txt", 750);
    DigikeyboardWrite("start Hello.txt", 1000);
    DigiKeyboard.sendKeyStroke(KEY_PAGE_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigikeyboardWrite("Can you see me?", 1000);
    DigikeyboardWrite("This is the BADUSB.", 1000);
    DigikeyboardWrite("Your PC is already infected with a virus! HAHA!", 3000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigikeyboardWrite("See you later!", 1000);
    DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(750);
    DigikeyboardWrite("cd..", 750);
    DigikeyboardWrite("rd /s /q BADUSB", 750);
    DigikeyboardWrite("exit", 200);
    digitalWrite(1, false);
}

void loop() {
}