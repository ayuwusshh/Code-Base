const http = require('http');
const server = http.createServer(function (req, res) {
  // console.log('Request Headers:', req.headers);
  console.log(req.url, req.method, req.headers);
  // process.exit();
  if (req.url === '/') {
    res.setHeader('Content-Type', 'text/html')
    res.write('<html>');
    res.write('<head><title>Home</title></head>');
    res.write('<body><h1>Welcome to Home</h1></body>');
    res.write('<html>');
    res.end();
  } else if (req.url === '/products') {
    res.setHeader('Content-Type', 'text/html')
    res.write('<html>');
    res.write('<head><title>Products</title></head>');
    res.write('<body><h1>Welcome to product section</h1></body>');
    res.write('<html>');
    return res.end();
  }
  else {
    res.setHeader('Content-Type', 'text/html')
    res.write('<html>');
    res.write('<head><title>Ayush SIngh Rajput</title></head>');
    res.write('<body><h1>Welcome</h1></body>');
    res.write('<html>');
    return res.end();
  }
});
const PORT = 3000;
server.listen(PORT, () => {
  console.log(`server is running on address http://localhost:${PORT}`);
});