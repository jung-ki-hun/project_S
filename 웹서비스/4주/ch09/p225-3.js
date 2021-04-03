const SYM=Symbol();
//const o={a:1, b:2, c:3, [SYM]:4};
//Object.keys(o).forEach(prop=> console.log(`${prop}: ${o[prop]}`));

//const o={1:'apple', 2:'xochitl', 3:'balloon', 4:'guitar', [SYM]:'xylophone',};
//console.log(o[SYM]);  //이렇게 출력은 된다.

const o={1:'apple', 2:'xochitl', 3:'balloon', 4:'guitar', 5:'xylophone',};


Object.keys(o)
.filter(prop=> o[prop].match(/^x/))
.forEach(prop=> console.log(`${prop}: ${o[prop]}`));
