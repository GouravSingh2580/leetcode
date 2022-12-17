class Solution {

    Stack<Integer> st = new Stack<>();

    public int evalRPN(String[] tokens) {
        
        for(int i=0; i<tokens.length; i++){
            
            String val = tokens[i];
            if(val.equals("*")){
                int num1 = st.pop();
                int num2 = st.pop();
                st.add((int)(num2 * num1));
            }else if(val.equals("/")){
                int num1 = st.pop();
                int num2 = st.pop();
                st.add((int)(num2 / num1));
            }else if(val.equals("+")){
                int num1 = st.pop();
                int num2 = st.pop();
                // System.out.println(st);
                st.add((int)(num2 + num1));
                
            }else if(val.equals("-")){
                int num1 = st.pop();
                int num2 = st.pop();
                st.add((int)(num2 - num1));
            }else{
                st.add(Integer.parseInt(val));
            }
        }
        return st.pop();
    }
}