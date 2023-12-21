function pattern(row) {
    for (var i = 1; i < row; i++){
        var str = "";
        for(var j = 1; j <= i; j++){
            str = str + "*";
        }
        console.log(str);
    }
}
pattern(15);