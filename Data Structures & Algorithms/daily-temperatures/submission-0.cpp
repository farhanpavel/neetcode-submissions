class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>store;
       int n=temperatures.size();
       for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i+1;j<n;j++){
            if(temperatures[i]<temperatures[j]){
                flag=0;
                store.push_back(j-i);
                break;
            }
        }
        if(flag==1){
            store.push_back(0);
        }
       }
       return store; 
    }
};
