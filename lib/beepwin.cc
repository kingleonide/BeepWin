#include <node.h>
#include <windows.h>

using namespace v8;

void Beep(const FunctionCallbackInfo<Value>& args) {
	Isolate* isolate = Isolate::GetCurrent();
	HandleScope scope(isolate);

	if (args.Length() == 0) {
		Beep(3000, 100);
	}
	else if(args.Length() == 2)
	{
		if (!args[0]->IsNumber() || !args[1]->IsNumber()) {
			isolate->ThrowException(Exception::TypeError(
					String::NewFromUtf8(isolate, "Argument is not number")));
			return;
		}
		
		if (args[0]->Int32Value() < 0 || args[1]->Int32Value() < 0) {
			isolate->ThrowException(Exception::TypeError(
						String::NewFromUtf8(isolate, "The number can not be less than zero")));
			return;
		}
		Beep(args[0]->Int32Value(), args[1]->Int32Value());
	}
	else
	{
		isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong number of arguments, Beep(), Beep(Frequency, Duration)")));
		return;
	}
}


void Init(Handle<Object> exports, Handle<Object> module) {
  NODE_SET_METHOD(module, "exports", Beep);
}

NODE_MODULE(addon, Init)