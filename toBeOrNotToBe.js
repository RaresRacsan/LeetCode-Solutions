var expect = function(val) {
    return{
        toBe: function(n){
            if(val === n){
                return true;
            }
            else{
                throw new Error("Not Equal");
            }
        },
        notToBe: function(n){
            if(val !== n){
                return true;
            }
            else{
                throw new Error("Equal");
            }
        }
    };
};
