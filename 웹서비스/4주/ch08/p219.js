const words=["Beachball", 'Rodeo', "Angel",
"Aardvark","Xylophone","November", "Chocolate",
"Papaya","Uniform","Joker","Clover","Bali"];
const longWords=words.reduce((a,w)=>w.length>6 ? a+" "+w : a, "").trim();
//trim() 메서드는 문자열 양 끝의 공백을 제거합니다.
console.log(longWords);
