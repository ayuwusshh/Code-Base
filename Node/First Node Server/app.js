const http = require('http');
const server = http.createServer(function (req, res) {
  console.log('req');
  process.exit();
});
const PORT = 3000;
server.listen(PORT, () => {
  console.log(`server is running on address http://localhost:${PORT}`);
});