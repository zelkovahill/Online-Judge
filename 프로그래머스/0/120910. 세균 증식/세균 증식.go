// 처음 세균의 마리수 n
// 경과한 시간 t
// t 시간후 세균의 수를 반환

// 1시간에 2배 증식

func solution(n int, t int) int {
    
    
    for i:= 0; i<t; i++ {
        n <<=1
    }
    
    return n
}