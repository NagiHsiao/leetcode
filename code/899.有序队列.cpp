class Solution {
public:
    string orderlyQueue(string s, int k) {
        //If k = 1, compare 0..n-1 times to find the mini one;
        if(k==1)return getMini(s);
        //If k >= 2, it must be able to be its ascending one. So make it ascending and return.
        if(k>=2)return makeAscending(s);

        return "false_nagi";
    }
    string getMini(string s){
        int n = s.length();
        string mini = s;

        for(int i=0;i<n;i++){
            s.append(s.substr(0,1));
            s.erase(0,1);

            if(mini.compare(s)>0)mini.assign(s);
        }

        return mini;
    }

    string makeAscending(string s){
        sort(s.begin(),s.end());
        return s;
    }
};