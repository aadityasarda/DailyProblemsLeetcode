class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = initialBoxes.size();
        int m = status.size();
        int candie = 0;
        queue<int>que;
        vector<bool>visi(m,false);
        unordered_set<int>foundBox;
        for(int i=0;i<n;i++){
            foundBox.insert(initialBoxes[i]);
            if(status[initialBoxes[i]] == 1){
                que.push(initialBoxes[i]);
                visi[initialBoxes[i]] = true;
            }
        }
        while(!que.empty()){
            int a = que.front();
            candie += candies[a];
            que.pop();
            
            for(auto i : containedBoxes[a]){
                foundBox.insert(i);
                if(status[i] == 1 && visi[i] == false){
                    que.push(i);
                    visi[i] = true;
                }
            }
            for(auto i : keys[a]){
                status[i] = 1;
                if(visi[i] == false && foundBox.find(i)!=foundBox.end()){
                    visi[i] = true;
                    que.push(i);
                }
            }
        }
        return candie;
    }
};
