// Bibliotecas

import React, {useState} from "react";
import ReactDOM from "react-dom/client";

// Definição da Interface

const App = () => {

// Estados de Gerenciamento

const [alunos, setAlunos] = useState ([]);
const [nome, setNome] = useState ("");
const [nota, setNota] = useState (Array(5).fill(0));
const [frequencia, setFrequencia] = useState("");

// Função Para Adionar Um Aluno

const adicionarAluno = (e) => {
  e.preventDefault();

  if (!nome || !frequencia || nota.some((n) => n === 0)) {
      alert ("Preencha os campos vazios.");
      return;
  }
  
  const aluno = {
    nome,
    nota,
    frequencia: parseFloat(frequencia),
    media: nota.reduce((acc, n) => acc + n, 0) / nota.length
  };
  
  setAlunos([...alunos, aluno]);
  setNome ("");
  setNota(Array(5).fill(0));
  setFrequencia("");
};

// Função Para Remover Um Aluno

const removerAluno = (index) => {
  const novosAlunos = [...alunos];
  novosAlunos.splice(index, 1);
  setAlunos (novosAlunos);
};

//Calcular Média Turma

const calcularMediaTurma = () => {
  if (alunos.length === 0) return 0;
  return (
    alunos.reduce ((acc, aluno) => acc + aluno.media, 0) / alunos.length
  );
};

return (

  <div style = {{fontFamily: "Arial, sans-serif", padding: "20px"}}>
    <h1>Cadastro de Alunos</h1>
      <form onSubmit = {adicionarAluno}>
  
        <input 
          type="text"
          placeholder="Nome"
          value={nome}
          onChange={(e) => setNome (e.target.value)} 
          required
          />
            
        <input
          type = "number" 
          placeholder = "Nota" 
          value={nota[0]} 
          onChange={(e)=> {
             const novasNotas = [...nota];
             novasNotas[0] = parseFloat(e.target.value);
             setNota(novasNotas);
            }} 
          required 
          />
            
        <input 
          type = "number" 
          placeholder = "Frequência (%)" 
          value={frequencia}
          onChange={(e) => setFrequencia(e.target.value)} 
          required 
          />
        <button type = "submit">Adicionar Aluno</button>
      </form>

      <h2>Lista de Alunos</h2>
      {alunos.length > 0 ? (
        <ul>
        {alunos.map((aluno, index) => (
          <li key= {index}>
             {aluno.nome}|Nota: {aluno.media ? aluno.media.toFixed(2) : "Sem nota"}|Frequencia: {aluno.frequencia}%
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

const root = ReactDOM.createRoot (document.getElementById("root"));
root.render(<App/>);
