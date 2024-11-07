using System.Linq; 

public class Solution {
    public long[] solution(int x, int n) {
        return Enumerable.Range(1, n) 
                         .Select(i => (long)x * i) 
                         .ToArray();
    }
}