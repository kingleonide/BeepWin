const Beep = require("beepwin");

Beep() //Default Beep

Beep(1000, 100);

Beep(333.123213, 135.2132); //in beepwin.cc double or float rounded to int

for(i = 0; i < 30; i++){
	Beep(1000 * i, 100.1);
}