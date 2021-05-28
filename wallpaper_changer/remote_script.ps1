Invoke-WebRequest http://www.thecuriosityworkshop.com/wp-content/uploads/2015/03/01-rubberduck-hongkong.jpg -OutFile C:\\temp\\d.jpg;
sleep 2;
set-itemproperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value 'C:\\temp\\d.jpg' -Force;
sleep 5;
RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True;