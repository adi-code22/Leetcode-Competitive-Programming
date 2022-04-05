/*
 * @lc app=leetcode id=729 lang=cpp
 *
 * [729] My Calendar I
 */

// @lc code=start
class MyCalendar {
public:
    MyCalendar() {
       
       
    }
    
    bool book(int start, int end) {
        if(start == 0 || end == 0){
            return null;
        }
        else{
            set<int> set;
            if(set.contain(start) ) return false;
            for(int i=start; i<end; i++){
                set.insert(i);
            }
            return true;
        }
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
// @lc code=end

