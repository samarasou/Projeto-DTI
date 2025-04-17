  // Bibliotecas

import React, {useState} from "react";

// Definição da Interface

const App = () => {

// Estdos de Gerenciamento

const [alunos, setAlunos] = useState ([]);
const [nome, setNome] = useState ("");
const [nota, setNota] = useState (Arraay(5).fill(0));
const [frequência, setFrequência] = useState ("");

// Função Para Adionar Um Aluno

const adicionarAluno = (e) => {
  e.preventDefault();
  const aluno = {
    nome,
    notas,
    frequencia: parseFloat(frequencia),
    media: notas.reduce((acc, nota) => acc + nota, 0) / nots.lenght
    };
    setAlunos([...alunos, aluno]);
    setNome ("");
    setNota(Array(5).fill(0));
    setFrequência("");

  } else {
    alert ("Preencha os campos vazios.");
  }
};

// Função Para Remover Um Aluno

const removerAluno = (index) => {
  constnovosAlunos = [...alunos];
  novosAlunos.splice(Index, 1);
  setAlunos (novosAlunos);
};

const calcularMediaTurma = () => {
  if (alunos.lenght == 0) return 0;
  return alunos.reduce ((acc, aluno) => acc + aluno.media, 0) / aluno.length;
};

return (

  <div style = {{frontFamily: "Arial, sans-serif", padding: "20px"}}>
    <h1>Cadastro de Alunos</h1>
      <form onSubmit = {adicionarAluno}>
        <input type = "text" placeholder = "Nome" value = {nome} onChange = {(e) => setNome (e.target.value)} required />
        <input type = "number" placeholder = "Nota" value={nota} onChange={(e)=> setNota(e.target.value)} required />
        <input type = "number" placeholder = "Frequência (%)" value={frequencia} onChange={(e) => setFrequencia(e.target.value)} required />
        <button type = "submit">Adicionar Aluno</button>
      </form>

      <h2>Lista de Alunos</h2>
      {alunos.lenght > 0 ? (
        <ul>
        {alunos.map((aluno, index) = > (
          <li key= {index}>
             {aluno.nome} | Nota: {aluno.nota.toFixed(2)} | Frequência: {aluno.frequencia}%
          </li>
        ))}
      </ul>
    ) : (
      <p>Nenhum aluno cadastrado.</p>
    )}
      </div>
  );
};
export default App;

const root =
  ReactDOM.createRoot (document.getElementByld("root"));
root.render(<App/>);
