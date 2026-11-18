# 💻 As origens da Linguagem C

Entre 1969 e 1973, no AT&T Bell Laboratories (Bell Labs), ocorreu o desenvolvimento e implementação da linguagem C por Dennis Ritchie em um DEC PDP-11 que utilizava o sistema operacional UNIX.

O desenvolvimento de C iniciou-se a partir de uma linguagem mais antiga, chamada BCPL, desenvolvida por Martin Richards que influenciou a criação de uma linguagem chamada B, inventada por Ken Thojmpson. A linguagem C herdou também diversas características do ALGOL 68.


## 📌 C é uma linguagem estruturada

A principal característica para uma linguagem estruturada é a compartimentalização de códigos e dos dados. Uma das maneiras de se aplicar essa compartimentalização é pelo uso de sub-rotinas que empregam variáveis locais (temporárias). Essas variáveis só podem ser acessadas dentro da função onde foram criadas. Deste modo, é possível escrever sub-rotinas de forma que o evento que ocorram dentro delas não  causem nenhum efeito inesperado em outra parte do programa.

* A função é o principal componente estrutural de C. -A sub-rotina isolada de C.

Outra maneira de estruturar e compartimentalizar o código em C é pelo uso de blocos de código, que são um grupo de comandos conectados logicamente e tratados como unidade. Pode-se criar blocos de código em C ao colocar uma sequência de comandos entre chaves. Exemplo abaixo:

<p>C code:</p>

``` c
//Este exemplo foi retirado do livro C completo e Total | Autor: Herbert Schildt

if(x < 10){
    printf("Muito baixo, tente novamente\n");
    scanf("%d", &x);
}
```
Blocos de código permitem que muitos algortimos sejam implementados com clareza, elegância e eficiência.

## 🔠 Palavras chave

Existem 27 palavras-chaves (ou palavras reservadas) definidas pel aversão original de C e masi cinco palavras que foram adicionadas pelo comitê ANSI (American Standard National Institute). Todas estas 32 palavras-chaves podem ser visualizadas na tabela 1.1 abaixo:

**Tabela 1.1 - Lista de palavras chaves de C ANSI** 
| | | |
| :--- | :--- | :--- | :--- |
| `auto`|  `double` |  `int` |  `struct` |
| `break`|  `else` |  `long` |  `switch` |
| `case`|  `enum` |  `register` |  `typedef` |
| `char`|  `extern` |  `return` |  `union` |
| `const`|  `float` |  `short` |  `unsigned` |
| `continue`|  `for` |  `signed` |  `void` |
| `default`|  `goto` |  `sizeof` |  `volatile` |
| `do`|  `if` |  `static` |  `while` |


## 📚 Referência Bibliográfica

SCHILDT, Herbert. C: completo e total. Tradução. 3. ed. São Paulo: Makron Books, 1996.


> *Nota: Parte da estruturação e refinamento textual deste documento foi auxiliada pelo Google Gemini.*
