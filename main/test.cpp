#include <stdio.h>
#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char ** argv) {
    printf("MyFunction Called\n");
}
extern "C" int EMSCRIPTEN_KEEPALIVE test(){
    return 3;
}
int main() {
    printf("Hello Worlds\n");
}

