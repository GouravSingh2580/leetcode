class MyCircularQueue {
public:
    int input_ptr;
    int output_ptr;
    bool full = false;
    unique_ptr<int[]> data;
    int k;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) : k{k}, input_ptr{0}, output_ptr{0}, data(new int[k]) {
        
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (input_ptr == output_ptr && full) {
            return false;
        }
        
        data[input_ptr] = value;
        input_ptr = (input_ptr + 1) % k;
        
        if (input_ptr == output_ptr) {
            full = true;
        }
        
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (input_ptr == output_ptr && !full) {
            return false; // queue empty
        }
        
        output_ptr = (output_ptr + 1) % k;
        
        full = false;
        return true;
        
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return data[output_ptr];
        
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return data[(input_ptr - 1 + k) % k];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return (input_ptr == output_ptr) && !full;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return (input_ptr == output_ptr) && full;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */