# Projeto-DTI

Este é um projeto que tem como objetivo criar um sistema para facilitar a organização de um professor. Esse sistema possui como entradas o nomme dos alunos, as suas respectivas notas em cinco disciplinas diferentes e a sua frequência. A funcionalidade do sistema consiste em facilitar o calculo da media das notas dos alunos e d turma, além de expor alunos que possuam frequência abaixo da desejada pelo professor ou com nota inferior à média da turma. Foi utilizado C na construção do back-end e React no front-end.

Instruções para executar o sistema

Backend (C)

01. Importante verificar se possui um compilador C instalado devidamente (gcc no Linux ou MinGW no Windows).

02. Compile o código com: gcc -o projeto_dti main.c

03. Execute o programa: ./projeto_dti

Frontend (React)

01. Importante verificar se possui o Node.js e o gerenciador de pacotes npm instalados.

02. Instale as dependências "npm install" no diretório.

03. execute o aplicativo "npm start".

04. Acesse o sistema pelo navegador em http: //localhost:3000.

Premissas Assumidas

* O professor terá um número até 100 alunos.
* Cada aluno terá até 5 disciplinas.
* A frequência esperada pelo professor é de 75%.
* A nota média de cada aluno é calculada com base na nota adiquirida nas cinco disciplinas.

Decisões de Projeto

* Gerenciamento de Estado: uso do useState para armazenar os dados no frontend.
* Interface em React: usada par aumentar a interatividade e melhorar a experiência do usuário.
* 

Informações Adicionais

* Os dados são armazendos apenas temporariamente.




