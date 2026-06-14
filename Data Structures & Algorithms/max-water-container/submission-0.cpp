class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1;
        int max_w=INT_MIN;
        while(l<r)
        {
            
            int maxw=(r-l)*min(h[l],h[r]);
            if(h[l]<h[r])
            {
                l++;
            }
            else{
                r--;
            }
            max_w=max(max_w,maxw);
        }
        return max_w;
    }
};
