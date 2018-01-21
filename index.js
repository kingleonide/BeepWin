var Beep = null;

if(process.platform == "win32" && process.arch == "x64") {
	Beep = require('./build/Release/beepwin');  
} else if(process.platform == "win32" && process.arch == "ia32") {
	Beep = require('./build/Release/beepwin');  
}

module.exports = Beep;