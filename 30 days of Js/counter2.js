var createCounter = function(init) {
    let initialValue = init;
    return{
        increment: function(){
            init += 1;
            return init;
        },
        decrement: function(){
            init -= 1;
            return init;
        },
        reset: function(){
            init = initialValue;
            return init;
        }
    };
};
