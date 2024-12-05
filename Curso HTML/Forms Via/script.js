const quizForm = document.getElementById('quiz-form');
const resultContainer = document.getElementById('result-container');
const resultText = document.getElementById('result-text');

quizForm.addEventListener('submit', (e) => {
  e.preventDefault();
  const answers = [];
  const radios = quizForm.querySelectorAll('input[type="radio"]');
  radios.forEach((radio) => {
    if (radio.checked) {
      answers.push(radio.value);
    }
  });

  if (answers.length !== radios.length) {
    alert('Please answer all questions!');
    return;
  }

  const result = calculateResult(answers);
  resultText.textContent = `Tu resultado: ${result}`;
  resultContainer.style.display = 'block';
});

function calculateResult(answers) {
  // Implement the logic to calculate the result based on the answers
  // For example:
  let score = 0;
  answers.forEach((answer) => {
    if (answer === 'economia') {
      score += 2;
    } else if (answer === 'educacion') {
      score += 1;
    } else if (answer === 'seguridad') {
      score += 3;
    }
  });
  if (score < 5) {
    return 'Candidato A';
  } else if (score < 10) {
    return 'Candidato B';
  } else {
    return 'Candidato C';
  }
}