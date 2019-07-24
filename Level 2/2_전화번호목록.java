class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
        
        for(int i=0; i<phone_book.length; i++) {
            for(int j=0; j<phone_book.length; j++) {
                if(j != i){
                    int numi = phone_book[i].length();
                    int numj = phone_book[j].length();
                    
                    if(numi <= numj) {
                        if(phone_book[i].equals(phone_book[j].substring(0, numi))) {
                            answer = false;
                            return answer;
                        }
                    }
                }
            }
        }
        
        return answer;
    }
}
