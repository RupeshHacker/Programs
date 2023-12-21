function fib(number) {
    let total = 1;
    for (let index = 1; index <= number; index++) {
        if (total==index) {
            console.log(index);
            total = total + index;
        }
        
    }
}
fib(100);