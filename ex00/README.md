### Primeira Questão - Exercício 00

#### Objetivo da questão

Criar uma série de arquivos e diretórios, dando uma série de caracteríscias pré-definidas aos mesmos. Incluindo o número de bytes, hard links, symlinks, permissões e datas a horas específicas.

#### Conhecimentos necessários:

- **Permissões no Linux:**
    
    Quando criamos um arquivo ou diretório no linux, o sistema operacional atribui permissões ao mesmo de forma automática. **Essas permissões são referentes, nesse ordem, ao usuário que criou o objeto(u), ao grupo que esse usuário pertence(g), e aos demais usuários(o).** 
    
    Na descrição desses permissões podemos ter os marcadores **r(leitura), w(escrita) e x(execução)**. Ao mexer nas permissões mexemos nesses elementos. 
    
    ```jsx
    drwxr-xr-x 2 ganselmo 2025_rio-de-janeiro 6 Oct 13 15:45 test0
    -rw-r--r-- 1 ganselmo 2025_rio-de-janeiro 0 Oct 13 15:46 test1
    drwxr-xr-x 2 ganselmo 2025_rio-de-janeiro 6 Oct 13 15:45 test2
    -rw-r--r-- 1 ganselmo 2025_rio-de-janeiro 0 Oct 13 15:46 test3
    ```
    
    Para mudar as permissões dos arquivos e diretórios no Linux usamos o comando **chmod,** e com ele podemos alterar as permissões de um único arquivo para o usuário, grupo ou outros, tanto somando uma nova atribuição quanto retirando uma antiga.
    
    **Dando uma nova permissão:**
    
    ```bash
    chmod u+x <nome_do_arquivo>
    ```
    
    **Retirando uma permissão:**
    
    ```bash
    chmod u-x <nome_do_arquivo>
    ```
    
    Também posso alterar todas de uma vez ao igual o usuário/grupo/outros a uma permissão. Sendo isso o equivalente a dizer “Tudo que não estiver depois do igual será retirado”
    
    **Comando de igualdade:**
    
    ```bash
    chmod u=rw <nome_do_arquivo>
    ```
    
    Além disso, podemos mudar mais de uma permissão, a mais de uma usuário, ao mesmo tempo
    
    **Comando de mudança múltipla:**
    
    ```bash
    chmod u-x,g+rw,o=r <nome_do_arquivo>
    ```
    
- **Link Simbólico**
    
    Um link simbólico é um atalho que pode servir como segunda fonte de acesso para um arquivo ou diretório, também conhecido como symlink ou soft link. No entanto, a sua verdadeira utilidade se mostra quanto aglutinamos mais de um caminho para arquivos e diretório em um único atalho, posto que usamos somente um comando para acessar todos os objetos de interesse.
    
    **Comando para criação do symlink:**
    
    ```bash
    ln -s <caminho_da_fonte> <caminho_do_atalho>
    ```
    
    No Linux, o comando ln é usado para criar links entre arquivos de origem e diretórios. 
    
    -s → Comando para links simbólicos
    
- **Mudando Tamanho do arquivo no Linux**
    
    Quando queremos alocar espaço em um arquivo sem precisar escrever nada nele, usamos comando fallocate. Porém, o comando é bem versátil e pode ser usado para criar arquivos preenchidos com 0’s, para apontar em que local do arquivo queremos começar a escrever e até qual local é permitido continuar escrevendo.
    
    **Comando para mudar o tamanho do arquivo alocando espaço:**
    
    ```bash
    fallocate -l <tamanho_em_bytes> <nome_do_arquivo>
    ```
    
    Porém, o fallocate não aceita a modificação do tamanho do arquivo para somente 1 byte. 
    
    Quando queremos “cortar” o arquivo até ele ter o tamanho desejado, e não nos importamos de perder informações, usamos o comando truncate.
    
    **Comando para mudar o tamanho do arquivo “cortanto” informação:**
    
    ```bash
    truncate -s <tamanho_em_bytes> <nome_do_arquivo>
    ```
    
- **Mudando data e hora de um arquivo**
    
    Podemos mudar a data e a hora de um arquivo no linux, tanto na hora de sua criação, quanto posteriormente usando o comando touch com a flag -t
    
    ```bash
    touch -t <ano_mês_dia_hora_minutos_segundos> <nome_do_arquivo>
    ```
    
    Para mudar a data e a hora de um arquivo simbólico, precisamos adicionar o comando -h após o touch, de modo a sinalizar que somente o link simbólico será alterado.
    
    ```bash
    touch -h -t  <ano_mês_dia_hora_minutos_segundos> <nome_do_arquivo_simbólico>
    ```
    
- **Criando um hard link**
    
    Um Hard link é um ponteiro para o inode de um arquivo, sendo o inode uma estrutura de dados do linux que reúne os dados sobre um arquivo. 
    
    Quando modificamos um arquivo que aponta para um inode, todos os arquivos são automaticamente modificados. Porém, se um for excluído, o outro ainda vai existir porque está apontado para o inode e não para o outro arquivo em si.
    
    ```bash
    ln <primeiro_arquivo> <segundo_arquivo>
    ```
    
- Compactando arquivos
    
    O comando tar junta todos os arquivos em um só e mantém as permissões de todos eles, bem como os links simbólicos e hard links. 
    
    Utilizamos junto com as flags -c e -f, que significam “create” e “file” para gerar uma aglutinação dos arquivos, **porém sem os compactar.**
    
    ```bash
    tar -cf exo.tar *
    ```
    
    Sendo o * um indicador de ‘todos os arquivos’, unindo todos em um só .tar