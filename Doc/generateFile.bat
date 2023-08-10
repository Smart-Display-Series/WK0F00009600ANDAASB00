@echo on

copy .\Application.hex ..\..\Doc\IDE_Output.hex

cd ..\..\Doc

srec_cat.exe IDE_Output.hex -Intel ^
 -crop 0x08000000 0x0803FFFF ^
 -o Application.hex -Intel
 
srec_cat.exe IDE_Output.hex -Intel ^
 -crop 0x08000000 0x0803FFFF ^
 -offset -0x08000000 ^
 -o Application.bin -binary
 