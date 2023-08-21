class Solution {
public:
    double average(vector<int>& salary) {
        int min=salary[0],max=salary[0];
        double sum=salary[0],avg;
        for(int i=1;i<salary.size();i++){
            if(salary[i]>max){
                max=salary[i];
            }
            else if(salary[i]<min){
                min=salary[i];
            }
            sum=sum+salary[i];
        }
        sum=sum-(max+min);
        int n=salary.size()-2;
        avg=sum/n;
        return avg;
    }
};
