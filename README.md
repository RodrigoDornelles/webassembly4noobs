<!-- Logo 4noobs -->

<p align="center">
  <a href="https://github.com/he4rt/4noobs" target="_blank">
    <img src="https://raw.githubusercontent.com/he4rt/4noobs/master/.github/header_4noobs.svg">
  </a>
</p>

<!-- Title -->

<p align="center">
  <h2 align="center">WebAssembly para noobs</h2>

  <h1 align="center"><img src="wasm/logo.png" alt="WASM" width="120"></h1>
  
  <p align="center">
    <br />
    <a href="#ROADMAP"><strong>Explore a documentação »</strong></a>
    <br />
    <br />
    <a href="link-para-abrir-issue">Report Bug</a>
    ·
    <a href="link-para-abrir-issue">Request Feature</a>
  </p>
</p>
    
 <!-- ABOUT THE PROJECT -->

## Sobre o Projeto
Provavelmente, este é o primeiro tutorial sobre web assembly em português. Mesmo já entrando em fase de adoção, existe bem pouco material mesmo em inglês.

Foi necessário muita pesquisa, e até mesmo descobrir sozinho algumas coisas para entender mais sobre como funciona o web assembly em si.

Neste tutorial você vai aprender tudo que é necessário sobre o webassembly. um compilado de semanas pesquisando e testando!

<!-- ROADMAP OF PROJECT -->

## ROADMAP

- [Maquina Virtual](#maquina-virtual)
    - [Conceitos](#conceitos)
        - [Memória principal](#memoria-principal)
        - [Memória auxiliar](#memoria-auxiliar)
    - [Implementação](#implementacao)
        - [Integrando com JS](#integrando-com-js)
        - [Primeiro programa](#primeiro-programa)
    - [Extendendo](#extendendo)
        - [Compilação](#compilacao)
        - [Sobre o LLVM](#sobre-o-llvm)
        - [Detalhe sobre Cors](#detalhe-sobre-cors)
        - [Importação/Exportação](#importacao-exportacao)
- [Outras Linguagens](#outras-linguagens)
  - [TypeScript](#typescript)
  - [C/C++](#c-c++)
    - [Emscripten](#emscripten)
    - [C/C++ Puro](#c-c++-puro)
  
  
<!-- CONTRIBUTING -->

## Maquina Virtual
Assim como o javascript, WASM funciona como uma maquina virtual no software do navegador, no lado de cliente. Mas possui algumas diferenças.

Enquanto que com o javascript possui um compilador JIT _(em tempo de execução)_, ao trabalhar em webassembly já possui o código compilado em bytecode.

Para tirar todo o proveito de intregrações entre javascript e webassembly, alguns conceitos de baixo nível serão importantes. Assim como funciona a própria arquitetura em si.

### Conceitos

## Autores

- **Rodrigo Dornelles** - _Entusiasta_

---

<p align="center">
  <a href="https://github.com/he4rt/4noobs" target="_blank">
    <img src="https://raw.githubusercontent.com/he4rt/4noobs/master/.github/footer_4noobs.svg" width="380">
  </a>
</p>
