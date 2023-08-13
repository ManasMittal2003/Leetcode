class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n1=heights.size();
        for(int i=0;i<n1-1;i++){
            for(int j=0;j<n1-i-1;j++){
                if(heights[j]>heights[j+1]){
                    string temp=names[j];
                    names[j]=names[j+1];
                    names[j+1]=temp;
                    int temp1=heights[j];
                    heights[j]=heights[j+1];
                    heights[j+1]=temp1;
                }
            }
        }
        reverse(names.begin(),names.end());
        return names;
    }
};
