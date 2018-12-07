#include <nan.h>

void Method(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  info.GetReturnValue().Set(Nan::New("You wot bruv?!").ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports) {
  exports->Set(Nan::New("oy").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(oy, Init);
