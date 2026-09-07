

class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        auto l = nums1.begin();
        auto mid = nums2.begin();

        vector<int> temp;

        while (l < nums1.end() && mid < nums2.end()) {

            if (*l < *mid) {
                temp.push_back(*l);
                l++;
            }
            else {
                temp.push_back(*mid);
                mid++;
            }
        }

        while (l < nums1.end()) {
            temp.push_back(*l);
            l++;
        }

        while (mid < nums2.end()) {
            temp.push_back(*mid);
            mid++;
        }

        int s = temp.size();

        if (s % 2 == 1) {
            return temp[s / 2];
        }
        else {
            return ((double)temp[s / 2 - 1] + temp[s / 2]) / 2.0;
        }
    }
};