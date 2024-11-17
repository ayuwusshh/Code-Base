document.getElementById('studyForm').addEventListener('submit', function(e) {
  e.preventDefault();

  const date = document.getElementById('date').value;
  const subject = document.getElementById('subject').value;
  const hours = document.getElementById('hours').value;
  const notes = document.getElementById('notes').value;

  const studyList = document.getElementById('studyList');
  const listItem = document.createElement('li');
  listItem.textContent = `${date} - ${subject}: ${hours} hours. Notes: ${notes}`;
  studyList.appendChild(listItem);

  // Clear the form
  this.reset();
});