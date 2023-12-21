function number(n) {
    let sum =0;
    for(let i=1;i<=n;i++){
        sum+=i
    }
    return sum;
}
let start= new Date();
console.log(number(10000000000));
let end = new Date();
console.log((end-start)/1000)
