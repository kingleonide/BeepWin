var Beep = require("../build/Release/beepwin");

Beep();

Beep(10000, 100);

for(i = 0; i < 10; i++){
	Beep(1000 * i, 100);
}