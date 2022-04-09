/*
 * @lc app=leetcode id=729 lang=cpp
 *
 * [729] My Calendar I
 */

// @lc code=start
class MyCalendar {
set<int> set;
public:
    MyCalendar() {
       
       
    }
    
    bool book(int start, int end) {
        // if(start == 0 || end == 0){
        //     return NULL;
        // }
        
            
            if(set.count(start)  || set.count(end-1)  ) return false;
            for(int i=start; i<end; i++){
                set.insert(i);
            }
            for(auto i: set){
                cout<<i<<" ";
            }
            cout<<"end===>";
            return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
// @lc code=end

