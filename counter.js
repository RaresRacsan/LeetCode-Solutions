var createCounter = function(n) {
    let current = n - 1;
    return function() {
        current += 1;
        return current;
    };
};
