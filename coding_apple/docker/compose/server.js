const express = require('express');
const app = express();

const server = app.listen(8080, () => {
  console.log('서버 실행중 http://localhost:8080');
});

app.get('/', (req, res) => {
  res.send('ㅗㅗㅗㅗ우하하하하하하하개쩐다');
}); 

process.on('SIGTERM', () => {
  server.close(() => {
    console.log('HTTP server closed')
  })
})
process.on('SIGINT', () => {
  server.close(() => {
    console.log('HTTP server closed')
  })
}) 