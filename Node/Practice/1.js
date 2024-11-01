const http = require('http');
const server = http.createServer((req, res) => {
  console.log(req.url, req.method);
  if (req.url === '/home') {
    res.write('<h1>Welcome to home section</h1>');
    return res.end();
  } else if (req.url === '/men') {
    res.write('<h1>Welcome to men section</h1>');
    return res.end();
  }
  else if (req.url === '/women') {
    res.write('<h1>Welcome to women section</h1>');
    return res.end();
  }
  else if (req.url === '/kids') {
    res.write('<h1>Welcome to kids section</h1>');
    return res.end();
  }
  else if (req.url === '/cart') {
    res.write('<h1>Welcome to cart section</h1>');
    return res.end();
  }
  res.write(
    `<html>
      <head>
        <nav>
          <ul>
            <li><a href="/home">Home</a></li>
            <li><a href="/men">Men</a></li>
            <li><a href="/women">Women</a></li>
            <li><a href="/kids">Kids</a></li>
            <li><a href="/cart">Cart</a></li>
          </ul>
        </nav>
      </head>
      <body>
      </body>
    </html>`
  );
  res.end();
});

server.listen(3000, () => {
  console.log('server running on http://localhost:3000');
});