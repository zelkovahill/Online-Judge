#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    
    if(is_prefix.length() > my_string.length())
    {
        answer =0;
        return answer;
    }
    
    for(int i=0; i<is_prefix.length();++i)
    {
        if(my_string[i] != is_prefix[i])
        {
            answer =0;
        return answer;
        }
    }
    answer =1;
    return answer;
}