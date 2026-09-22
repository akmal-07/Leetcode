class MyCircularQueue {
    vector<int> q;
    int capacity, front, rear, size;

public:
    MyCircularQueue(int k) {
        capacity = k;
        front = 0;
        rear = 0;
        size = 0;
        q = vector<int>(capacity);
    }
    
    bool enQueue(int value) {
        if(isFull()) {
            return false;
        }
        q[rear] = value;
        rear = (rear + 1) % capacity;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) {
            return false;
        }
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) {
            return -1;
        }
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        if(rear == 0) {
            return q[capacity - 1];
        }
        return q[rear - 1];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};