class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int total =0;
        int lastp=0 ,lastm=0,lastg=0;

        for(int i=0;i<garbage.size();i++){
            total += garbage[i].size();

            for (char c:garbage[i]){
                if(c == 'P') lastp=i;
                else if(c=='M')lastm=i;
                else if(c=='G') lastg=i;
            }
        }

    int timep=0, timeg=0,timem=0;
    for(int i=0;i<lastp;i++) timep += travel[i];
       for(int i=0;i<lastm;i++) timem += travel[i];
          for(int i=0;i<lastg;i++) timeg += travel[i];
        return total+timep+timeg+timem;
    }
};