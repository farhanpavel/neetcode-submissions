class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    queue<pair<string,int>>q;
    unordered_set<string>st(wordList.begin(),wordList.end());
    q.push({beginWord,1});
    st.erase(beginWord);
    while(!q.empty()){
    string word = q.front().first;
    int distance = q.front().second;
    q.pop();
    if(word==endWord) return distance;
    for(int i=0;i<word.size();i++){
    char orginalWord = word[i];
    for(int j='a' ; j<='z' ; j++){
    word[i]=j;
    if(st.find(word)!=st.end()){
    st.erase(word);    
    q.push({word,distance+1});
    }    
    }
    word[i]=orginalWord;    
    }    
    }    
    return 0;

    }
};
