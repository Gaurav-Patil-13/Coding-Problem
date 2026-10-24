class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        int cal[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        string k=max(arriveAlice, arriveBob);
        string l=min(leaveAlice, leaveBob);
        
        int ans=0;
        if(k>l)ans =0;
        else if(k.substr(0,2)==l.substr(0,2)){
            ans = (stoi(l.substr(3,5))-stoi(k.substr(3,5))+1);
        }
        else{
            int  start= stoi(k.substr(0,2))-1;
            int end = stoi(l.substr(0,2))-1;
            for(int i=start+1;i<end;i++){
                ans+=cal[i];
            }
            ans+=(((cal[start]-stoi(k.substr(3,5)))+(stoi(l.substr(3,5))))+1);
        }
        return ans;
    }
};