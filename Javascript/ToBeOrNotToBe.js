var expect = function(val) {
    return {
        toBe: function(exp) {
        if (val !== exp || val === null || val === undefined) {
            throw new Error('Not Equal');
        }
        return true;
        },
        notToBe: function(exp) {
        if (val === exp || val === null || val === undefined)  {
            throw new Error('Equal');
        }
        return true;
        }
    };
};

// console.log(expect(5).toBe(null)); // true
console.log(expect(null).notToBe(true)) // throws "Equal"
 