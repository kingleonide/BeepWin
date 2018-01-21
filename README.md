BeepWin
========

The `beepwin` package is a C++ extension that requires a build environment to be installed on your system. You must be able to build node.js itself to be able to compile and install the `beepwin` module.

[![IMAGE ALT TEXT HERE](https://mbch.guide/wp-content/uploads/youtubepng.png)](https://www.youtube.com/watch?v=sC2qlDQf3Tw)
### Install on Windows

For compiling `beepwin` on windows, the following tools.

* Visual Studio c++ 2010 (do not use higher versions)
* Windows 7 64bit SDK
* Python 2.7 or higher

Open visual studio command prompt. Ensure node.exe is in your path and install node-gyp.

```
npm install -g node-gyp
```

Next you will have to build the project manually to test it. Use any tool you use with git and grab the repo.

```
git clone https://github.com/kingleonide/beepwin.git
cd beepwin
set PYTHON=D:\Programs\Python27\python.exe (setup your python.exe path)
npm install
node-gyp rebuild
```

or

```
set PYTHON=D:\Programs\Python27\python.exe (setup your python.exe path)
npm install beepwin
```

This should rebuild the driver successfully if you have everything set up correctly.

### Usage BeepWin

```
var Beep = require("../build/Release/beepwin");

Beep(); // default Beep(3000, 100), see in lib/beepwin.cc

Beep(10000, 100); // 10000 = frequency, 100 = duration in ms

for(i = 0; i < 10; i++){
	Beep(1000 * i, 100);
}
```
