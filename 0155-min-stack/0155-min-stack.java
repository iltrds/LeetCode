class MinStack {

    private Stack<Integer> mainStack = new Stack<>();

    public MinStack() {
        
    }
    
    public void push(int val) {
        mainStack.push(val);
    }
    
    public void pop() {
        mainStack.pop();
    }
    
    public int top() {
        return mainStack.peek();
    }
    
    public int getMin() {
        int minValue = Integer.MAX_VALUE;
        for (int value : mainStack){
            if (value < minValue){
                minValue = value;
            }
        }
        return minValue;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */