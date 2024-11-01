const http = require('http');
const server = http.createServer(function (req, res) {
  // console.log('Request Headers:', req.headers);
  console.log(req.url, req.method, req.headers);
  // process.exit();
});
const PORT = 3000;
server.listen(PORT, () => {
  console.log(`server is running on address http://localhost:${PORT}`);
});