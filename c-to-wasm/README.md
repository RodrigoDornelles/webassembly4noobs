C to Wasm
=========

compilado o comando:
```BASH
clang --target=wasm32 --no-standard-libraries -Wl,--export-all -Wl,--no-entry -Wl,--allow-undefined  -o add.wasm add.c
```

## Referencias ##
* <https://depth-first.com/articles/2019/10/16/compiling-c-to-webassembly-and-running-it-without-emscripten/>