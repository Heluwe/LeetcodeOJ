class MinStack {
	Stack<Long> stack = new Stack<>();
	long min;
	public void push(int x) {

		if (stack.isEmpty()) {
			stack.push(0L);
			min = x;
		}
		else {
			stack.push(x - min);
			if (x < min)
				min = x;
		}
	}

	public void pop() {
		if (stack.isEmpty()) return;
		long tp = stack.pop();
		if (tp < 0)
			min -= tp;
	}

	public int top() {
		long top = stack.peek();
		if (top > 0)
			return (int)(top + min);
		else
			return (int)min;    // because this minimal value was updated,so  just return minimal 
	}							//another popular answer is when push a value less than the minimal,
							    // push a old minimal  and than push the new minimal,so when 
	public int getMin() {       // when we pop a value that equals to the minimal,this time ,we just get 
		return (int)min;    	//the peek as a new minimal,than pop it from stack.	 
	}
}