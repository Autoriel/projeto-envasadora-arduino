# projeto-envasadora-arduino
Envasadora que detecta copos vazios e os enche de forma autônoma. 

#Sobre o projeto
O projeto consiste em uma envasadora autônoma que, ao ser ligada, verificará se os copos que estão passando por ela estão cheios ou vazios. Caso estejam vazios, ela irá parar a esteira e encher os copos até o nível estabelecido. Caso contrário, seguirá seu fluxo normal até a segunda verificação. A ideia inicial era, assim que o copo não passasse na segunda verificação, uma segunda ação fosse tomada pela envasadora. Devido a falta de tempo, só conseguimos fazer com que a esteira parasse caso um copo vazio passasse pela segunda verificação. O código, no entanto, está semi-pronto para uma ação alternativa.

# Importante
Esse projeto foi feito por uma equipe de sete pessoas em um projeto final de um curso técnico e envolve um conhecimento avançado nas áreas de mecânica e eletrônica. O código foi elaborado por mim e estou disponibilizando ao público para quem tiver interesse em fazer um projeto similar. Devido a complexidade do projeto e inviabilidade de fazer o tutorial aqui, apenas será informado os materiais e portas utilizadas.

Materiais necessários:

1 - Uma placa Arduino Uno
2 - Quatro sensores de obstáculo infravermelho
3 - Uma fonte regulável/ajustável
4 - Uma bomba d'água 12v
5 - Uma interface de relé para arduíno

Portas:

2º - 

3º - Botão que irá ligar a fonte de alimentação da envasadora
4º - Sensor que ficará embaixo na primeira linha de verificação para identificar se há um copo.
5º - Bomba d'água que irá encher o copo
6º - Sensor que ficará embaixo na segunda linha de verificação para identificar se há um copo.
7º -
8º - Sensor que ficará em cima na primeira linha de verificação para identificar se o copo está cheio.
9º - Sensor que ficará em cima na segunda linha de verificação para identificar se o copo está cheio.
