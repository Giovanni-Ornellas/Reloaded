# Questão 06

### Sexta Questão - Exercício 06

### **Objetivo da questão**

    Criar uma função que imprime todo o alfabeto em ordem crescente.

### Conhecimentos necessários

Este é um exercício bem simples, sendo necessário somente saber como usar a função write().

- **Usando a função write()**
    
    No caso do exercício só precisamos que ela escreva algo no terminal, então - por hora - podemos ignorar o resto das capacidades dessa função. A sintaxe da função é a seguinte:
    
    ```c
    ssize_t write(int fd, const void *buf, size_t count);
    ```
    
    Sendo seus parâmetros os seguintes:
    
    - fd → Identifica onde queremos escrever
    - buf → Ponteiro para o buffer, onde serão enviados os dados
    - count → Quantidade de bytes a escrever no buf
    
    O file descriptor pode ter os valores 0, 1 e 2. Sendo que 
    
    - 0 → Entrada do teclado (stdin)
    - 1 → Saída padrão (stdout)
    - 2 → Saída de erro (stderr)
    
    Como retorno a função entrega o número de bytes escritos com sucesso  ou -1 em caso de erro.
    
    Lembrando que essa função pertence a lib:
    
    ```c
    <unistd.h>
    ```