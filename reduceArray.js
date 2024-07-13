var reduce = function(nums, fn, init) {
    if(nums.length === 0)   return init;
    else{
        let val = fn(init, nums[0]);
        for(let i = 1; i < nums.length; i++){
            val = fn(val, nums[i]);
        }
        return val;
    }
};
