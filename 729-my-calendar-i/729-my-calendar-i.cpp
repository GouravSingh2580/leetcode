class MyCalendar {
    set<pair<int, int>> bookings; // C++ uses binary tree under the hood for set
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
		// Since we are searching on the {end, end}, we are guaranteed to find the interval which is just after our interval, 
		// i.e. which starts after our interval ends, so we are sure that this interval can not overlap with our interval, 
		// that's why we only need to check the previous interval for overlap
        if (auto it = bookings.lower_bound({end, end}); it != bookings.begin() and prev(it)->second > start) return false;
        bookings.insert({start, end});
        return true;
    }
};