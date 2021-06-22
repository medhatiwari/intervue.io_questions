const generateLargeNumberInput = () => {
  // 0 to 1000 lines Max
  const lines = Math.floor(Math.random()*100)+1;
  let str =`${lines}
`;
  for(let idx =0;idx<lines;idx++){
    let m =Math.floor(Math.random()*10)*10;
    let n =Math.floor(Math.random()*10)*10;
    let k =Math.floor(Math.random()*10)*10+n;
    str += `${m} ${n} ${k}
`;
  }
  return str;
}
module.exports = {
  generateLargeNumberInput
}
