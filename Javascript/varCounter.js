var createCounter = function(init) {
     return {
        increment : function() {
            init++;
        }
        , decrement : function() {
            init--;
        }
        , reset : function() {
            init = 0;
        }
     }; 
};