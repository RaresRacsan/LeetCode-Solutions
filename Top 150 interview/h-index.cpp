class Solution {
public:
    int hIndex(vector<int>& citations) {
        int v[1001] = {0};
        for(int i = 0; i < citations.size(); i++){
            v[citations[i]]++;
        }
        int nr = 0;
        for(int i = 1000; i >= 1; i--){
            if(v[i] != 0){
                nr += v[i];
            }
            v[i] = nr;
            if(v[i] >= i)
                return i;
        }
        if(v[0] > 0)    return 0;
        return 1;
    }
};
