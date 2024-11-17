// Get references to the DOM elements
const studyForm = document.getElementById('studyForm');
const studyList = document.getElementById('studyList');
const studyChart = document.getElementById('studyChart');

let studyData = []; // Array to hold study session data

// Function to update the chart
function updateChart() {
  const labels = studyData.map(session => session.date);
  const data = studyData.map(session => session.hours);

  const ctx = studyChart.getContext('2d');
  if (window.studyChartInstance) {
    window.studyChartInstance.destroy(); // Destroy previous instance if it exists
  }

  window.studyChartInstance = new Chart(ctx, {
    type: 'bar',
    data: {
      labels: labels,
      datasets: [{
        label: 'Study Hours',
        data: data,
        backgroundColor: 'rgba(243, 156, 18, 0.6)',
        borderColor: 'rgba(243, 156, 18, 1)',
        borderWidth: 1
      }]
    },
    options: {
      scales: {
        y: {
          beginAtZero: true
        }
      }
    }
  });
}

// Event listener for form submission
studyForm.addEventListener('submit', function (event) {
  event.preventDefault(); // Prevent the default form submission

  // Get form values
  const date = document.getElementById('date').value;
  const subject = document.getElementById('subject').value;
  const hours = parseFloat(document.getElementById('hours').value);
  const notes = document.getElementById('notes').value;

  // Add the new study session to the array
  studyData.push({ date, subject, hours, notes });

  // Update the study list
  const listItem = document.createElement('li');
  listItem.textContent = `${date} - ${subject}: ${hours} hours`;
  studyList.appendChild(listItem);

  // Update the chart
  updateChart();

  // Clear the form
  studyForm.reset();
});