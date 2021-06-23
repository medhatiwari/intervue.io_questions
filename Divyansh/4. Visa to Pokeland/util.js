const generateLargeNumberInput = () => {
  // 0 to 1000 lines Max
  const lines = Math.floor(Math.random()*5)+1;
  let str = `${lines}`;
  for( let idx = 0; idx < lines; idx++) {
      let l = Math.floor(Math.random() * 100) + 1;
      let lineStr = "";
      for (var i = 0;i<l;i++) {
          let num = Math.floor(Math.random()*l) + 1;
          lineStr += `${num}`;
          if (i !== (l) - 1) {
              lineStr += ' ';
          }
      }
          str += `
${l}
${lineStr}`;
  }
  return str;
}

module.exports = {
  generateLargeNumberInput
}
