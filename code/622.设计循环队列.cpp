/*
in cpp, '-1' is different from 'false'
*/

class MyCircularQueue {
public:
    int f,r,c;
    vector<int> e;

    MyCircularQueue(int k) {
        this->c = k+1;
        this->e = vector<int>(c);
        r = f = 0;
    }
    
    bool enQueue(int value) {
        if(isFull())return false;

        e[r] = value;
        r = (r+1+c)%c;
        return true;

    }
    
    bool deQueue() {
        if(isEmpty())return false;

        f = (f+1+c)%c;
        return true;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return e[f];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        return e[(r-1+c)%c];
    }
    
    bool isEmpty() {
        return f==r;
    }
    
    bool isFull() {
        return (r+1)%c == f;
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