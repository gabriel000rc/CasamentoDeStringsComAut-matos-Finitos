# Casamento De Strings Com Auto matos Finitos
Exercício de teoria da computação.

O projeto foi desenvolvido na linguagem C seguindo os critérios de avaliação especificados junto a descrição do projeto.

Foram desenvolvidas quatro funções, sendo que três destas foram exigidas como critério de avaliação. Sendo ela:

Prefixo: esta palavra recebe uma palavra e uma chave(iremos nos referir neste projeto como chave a palavra a qual será buscada), é armazenado o tamanho da palavra e da chave em variáveis, verifica-se se o tamanho da chave é maior do que o tamanho da palavra pois não há como ser prefixo caso seja, com o auxílio de um contador é executado um laço de repetição que percorre a palavra comparando os caracteres com os da chave, caso em algum momento seja encontrado alguma divergência, o programa irá parar e devolver uma resposta negativa.

Sufixo: recebe uma palavra e uma chave, armazena o tamanho de ambas em variáveis e define-se variáveis com os tamanhos de ambas -1. É feita a verificação comparando o tamanho da chave com o da palavra do mesmo modo como descrito na função anterior. Após a verificação é utilizado um loop de repetição que começa do final da palavra e compara com o final da chave, se ocorrer divergências o programa para e retorna uma resposta negativa.

Subpalavra: recebe uma palavra e uma chave, armazena o tamanho de ambas em variáveis, confere-se os tamanhos das strings como descrito nas ultimas funções, define-se variáveis com o tamanho das strings -1. O motor que faz a comparação é composta por um loop que inteira pelo tamanho da variável como o tamanho da palavra -1, dentro deste ciclo de repetição, há uma estrutura "if" que compara o caractere da palavra em questão com o caractere da chave indicado pela variável que contém o tamanho da chave -1, caso ambas seja semelhantes é retira do 1 deste contador e é verificado se este contador não tem o valor de -1, se tiver ele para a função e retorna uma resposta positiva para o usuário, se não for, ele continua o loop, se houver divergências entre os caracteres, então ira entra na estrutura "else" e ira zerar o contador(redefinir o contador para o tamanho de chave-1), caso a acabe o loop e não de a resposta positiva, é atribuído uma resposta negativa a qual será reportada ao usuário.

A quarta função citada acima é apenas para simplificar manutenções futuras quanto a mensagem de erro;

O programa em questão foi desenvolvido na IDE Code-Blocks, é recomendado que se utilize a mesma IDE para que aja o pleno funcionamento do programa.
