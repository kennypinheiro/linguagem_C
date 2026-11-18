# 💻 As origens da Linguagem C

Entre 1969 e 1973, no *AT&T Bell Laboratories* (Bell Labs), a linguagem C foi desenvolvida e implementada por **Dennis Ritchie** em um computador DEC PDP-11 que utilizava o sistema operacional UNIX.

O desenvolvimento de C originou-se a partir de uma linguagem precursora chamada **BCPL** (desenvolvida por Martin Richards), que influenciou a criação da linguagem **B** (inventada por Ken Thompson). Além disso, a linguagem C herdou diversas características estruturais e sintáticas do **ALGOL 68**.

---

## 📌 C é uma linguagem estruturada

A principal característica de uma linguagem estruturada é a **compartimentalização de códigos e dados**. Uma das formas de aplicar essa compartimentalização é por meio do uso de sub-rotinas que empregam **variáveis locais** (temporárias). Essas variáveis são estritamente restritas ao escopo da função onde foram declaradas, impedindo que eventos ocorridos em seu interior causem efeitos colaterais inesperados em outras partes do programa.

* **A função como componente estrutural:** A função é o principal bloco de construção e o mecanismo fundamental de isolamento de sub-rotinas em C.

Outro pilar para estruturar o código em C é o uso de **blocos de código**, definidos como um grupo de comandos logicamente conectados tratados como uma única unidade. Em C, cria-se um bloco delimitando uma sequência de instruções entre chaves (`{}`).

Exemplo prático:

```c
// Este exemplo foi retirado do livro C Completo e Total | Autor: Herbert Schildt

if (x < 10) {
    printf("Muito baixo, tente novamente\n");
    scanf("%d", &x);
}

```

O uso adequado de blocos de código permite que algoritmos complexos sejam implementados com maior clareza, elegância e eficiência computacional.

---

## 🔠 Palavras-chave

A versão original da linguagem C contava com **27 palavras-chave** (ou palavras reservadas). Posteriormente, o comitê ANSI (*American National Standards Institute*) adicionou mais cinco palavras, totalizando as **32 palavras-chave** padronizadas pelo **ANSI C**, listadas na tabela abaixo:

— Palavras-chave do ANSI C

| **Tabela 1.1** |  |  |  |
| --- | --- | --- | --- |
| `auto` | `double` | `int` | `struct` |
| `break` | `else` | `long` | `switch` |
| `case` | `enum` | `register` | `typedef` |
| `char` | `extern` | `return` | `union` |
| `const` | `float` | `short` | `unsigned` |
| `continue` | `for` | `signed` | `void` |
| `default` | `goto` | `sizeof` | `volatile` |
| `do` | `if` | `static` | `while` |

---

## 📚 Referência Bibliográfica

SCHILDT, Herbert. **C: completo e total**. Tradução. 3. ed. São Paulo: Makron Books, 1996.

---

> *Nota: Parte da estruturação e refinamento textual deste documento foi auxiliada pelo Google Gemini.*
