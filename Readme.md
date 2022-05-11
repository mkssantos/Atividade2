# Exercicio 2

<div>
    <h2>Crie uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguinte ações</h2>
    <ul>
        <li>Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova todas as réplicas sem mover os ”ponteiro“.</li>
        <li>Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo dessas novas inserções?</li>
    </ul>
</div>

# Solução
<div>
    <ul>
        <li>Primeiro se cria um arquivo com 100 nomes</li>
        <li>Depois disso o programa ler o arquivo para verificar se possui nomes repedidos caso ele encontre nemes repetidos, ao qualquer ocorrencia de nome repetido sem ser o primeiro lido o porgrama retira esse nome.</li>
    </ul>

</div>

# Pergunta:
<div>
    <h1>1- Como você genrencia os espaços em branco para novas inserções?Qual seria o custa dessas novas inserções</h1>
    </p>O programa subistitui o espaço por "-1", fazendo assim para o inserir novamente o progrma percorre o arquivo por completo e quando chega a hora de inserir ele verifica se possui algum espaço com "-1" para dar prioridade, se não ele insere ao final do arquivo isso se o arquivo não estiver cheio.
    O custo é de n pois o programa ter que percorrer a lista uma unica vez.</p>
</div>
# Compilação e Execução

A lista dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
