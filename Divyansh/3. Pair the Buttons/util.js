const generateLargeNumberInput = () => {
  const lines = (Math.floor(Math.random()*10)) + 1;
  let str=`${lines}
`;
  for(let idx=0;idx<lines;idx++){
  let k= (Math.floor(Math.random()*100)) + 1;
  str +=`${k}
`;
    for( let i=0;i<k;i++){
      let m=(Math.floor(Math.random()*100)) + 1;
      if(m!==k-1) str += `${m} `;
      else str += `${m}`;
    }
    if(idx!=lines-1) str +=`
`;
  }
return str;
}
module.exports = {
  generateLargeNumberInput
}
