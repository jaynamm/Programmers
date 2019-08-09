import java.util.*;

class Solution {
  public String solution(String s) {
      String answer = "";
      String num[] = s.split(" ");
      int[] arr = new int[num.length];
      int i=0;
      
      for(String n : num){
          arr[i] = Integer.parseInt(n);
          i++;
      }
      
      Arrays.sort(arr);
      
      answer = Integer.toString(arr[0]) + " " + Integer.toString(arr[i-1]);
      
      return answer;
  }
}
