class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boat_count = 0;
        sort(people.begin(), people.end());
        int sum, i=0;
        int j=people.size()-1;
        while(i<=j) {
            sum = people[i] + people[j];
            if(sum <= limit){
                boat_count ++;
                i++;
                j--;
            } else {
                boat_count ++;
                j--;
            }
        } return boat_count;
    }
};
