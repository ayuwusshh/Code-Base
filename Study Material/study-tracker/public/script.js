const studySessions = JSON.parse(localStorage.getItem('studySessions')) || [];

// Function to update the chart
function updateChart(chart, data) {
  chart.data.labels = data.map(session => session.date);
  chart.data.datasets[0].data = data.map(session => session.hours);
  chart.update();
}

// Create a Chart.js chart
const ctx = document.getElementById('studyChart').getContext('2d');
const studyChart = new Chart(ctx, {
  type: 'line',
  data: {
    labels: [], // Will be filled dynamically
    datasets: [{
      label: 'Hours Studied',
      data: [], // Will be filled dynamically
      backgroundColor: 'rgba(40, 167, 69, 0.5)',
      borderColor: 'rgba(40, 167, 69, 1)',
      borderWidth: 2,
      fill: true,
      tension: 0.4 // This creates a wave-like effect
    }]
  },
  options: {
    responsive: true,
    scales: {
      y: {
        beginAtZero: true,
        title: {
          display: true,
          text: 'Hours'
        }
      },
      x: {
        title: {
          display: true,
          text: 'Date'
        }
      }
    },
    plugins: {
      legend: {
        display: true,
        position: 'top',
      },
      tooltip: {
        mode: 'index',
        intersect: false,
      }
    }
  }
});

// Load existing study sessions into the list and chart
studySessions.forEach(session => {
  const studyList = document.getElementById('studyList');
  const listItem = document.createElement('li');
  listItem.textContent = `${session.date} - ${session.subject}: ${session.hours} hours. Notes: ${session.notes}`;
  studyList.appendChild(listItem);
});

// Update the chart with existing data
updateChart(studyChart, studySessions);

// Handle form submission
document.getElementById('studyForm').addEventListener('submit', function (e) {
  e.preventDefault();

  const date = document.getElementById('date').value;
  const subject = document.getElementById('subject').value;
  const hours = parseFloat(document.getElementById('hours').value);
  const notes = document.getElementById('notes').value;

  // Add the new study session to the array
  studySessions.push({ date, subject, hours, notes });

  // Save to Local Storage
  localStorage.setItem('studySessions', JSON.stringify(studySessions));

  // Update the study list
  const studyList = document.getElementById('studyList');
  const listItem = document.createElement('li');
  listItem.textContent = `${date} - ${subject}: ${hours} hours. Notes: ${notes}`;
  studyList.appendChild(listItem);

  // Update the chart with the new data
  updateChart(studyChart, studySessions);

  // Clear the form
  this.reset();
});