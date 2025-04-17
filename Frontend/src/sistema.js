// Bibliotecas

import React, {useState} from "react";
import ReactDom from "react-dom";

// Definição da Interface

const App = () => {

// Definição dos Estados

const [alunos, setAlunos] = useState ([]);
const [nome, setNome] = useState ("");
const [nota, setNota] = useState ("");

// Função Para Adionar Um Aluno

const adicionarAluno = (e) => {
  e.preventDefault();
  setAlunos([...alunos, { nome, nota }]);
  setNome ("");
  setNota("");
};
