#include <stdio.h>
#include <emscripten/emscripten.h>

int main() {
    printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif
//must include EMSCRIPTEN_KEEPALIVE ON EVERY FUNCTION BECAUSE COMPILER ONLY FOCUS TO INT MAIN.
EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char ** argv) {
    printf("MyFunction Called\n");
}

#ifdef __cplusplus
}
#endif