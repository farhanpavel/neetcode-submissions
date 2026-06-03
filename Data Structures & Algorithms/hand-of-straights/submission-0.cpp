class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    map<int,int>mp;
    for(int i=0;i<hand.size();i++){
     mp[hand[i]]++;   
    }
    while(!mp.empty()){
    int x = mp.begin()->first;
    for(int i=0;i<groupSize;i++){
    int num = i+x;
    if(mp.find(num)==mp.end()) return false;
    mp[num]--;
    if(mp[num]==0){
        mp.erase(num);
    }   
    }    
    }
    return true;

    }
};
