const generateLargeNumberInput = () => {
  const lines = (Math.floor(Math.random()*10)) + 1;
  let str=`${lines}
`;
  for(let idx=0;idx<lines;idx++){
    let k = (Math.floor(Math.random()*100)) + 1;
    for(let i=0;i<k;i++){
      let temp = (Math.floor(Math.random()*100)) + 1;
      if(i!==k-1)
      str +=`${temp}
`;
      else str +=`${temp}`;
    }
  }
return str;
}
module.exports = {
  generateLargeNumberInput
}
