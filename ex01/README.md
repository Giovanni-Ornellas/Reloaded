# Questão 01

### Segunda Questão - Exercício 01

### **Objetivo da questão**

    Criar um arquivo com um conteúdo específico dentro dele pelo terminal.

### **Conhecimentos necessários**

- **Criando arquivos com touch**
    
    O touch é um comando usado para criar arquivos vazios via terminal, bem com mudar data e hora dos já criados - como visto na questão anterior. Ele também pode ser usado para criar mais de um arquivo de uma vez.
    
    ```bash
    touch <nome_do_arquivo>.<extensão>
    ```
    
    O uso da extensão do arquivo é opcional.
    
- **O comando echo**
    
    O comando echo é bem mais versátil que o touch, sendo usado para imprimir mensagens no terminal, criar arquivos e diretórios, testar scripts e mais.
    
    Por exemplo, o comando:
    
    ```bash
    echo "Hello World!"
    ```
    
    Imprime essa exata mensagem no terminal, enquanto o comando
    
    ```bash
    echo "$USER"
    ```
    
    Imprime o valor da variável de ambiente. No que tange ao exercício precisamos escrever o um char em um arquivo, e tem mais de uma forma de fazer isso. Podemos escrever no arquivo apagando tudo o que houver antes com:
    
    ```bash
    echo "Z" > <arquivo>
    ```
    
    Como também podemos escrever no final do arquivo, respeitando o conteúdo antigo.