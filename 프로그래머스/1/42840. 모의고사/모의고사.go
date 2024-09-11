func solution(answers []int) []int {
    // 각 수포자의 패턴
    p1 := []int{1, 2, 3, 4, 5}
    p2 := []int{2, 1, 2, 3, 2, 4, 2, 5}
    p3 := []int{3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
    
    // 각 수포자의 점수를 기록
    giveUpMathBro1Score := 0
    giveUpMathBro2Score := 0
    giveUpMathBro3Score := 0

    // 정답 배열과 각 수포자의 패턴을 비교하여 맞힌 문제 수 계산
    for i, answer := range answers {
        if answer == p1[i%len(p1)] {
            giveUpMathBro1Score++
        }
        if answer == p2[i%len(p2)] {
            giveUpMathBro2Score++
        }
        if answer == p3[i%len(p3)] {
            giveUpMathBro3Score++
        }
    }

    // 가장 높은 점수 찾기
    maxScore := max(giveUpMathBro1Score, giveUpMathBro2Score, giveUpMathBro3Score)

    // 가장 높은 점수를 받은 사람 찾기
    result := []int{}
    if giveUpMathBro1Score == maxScore {
        result = append(result, 1)
    }
    if giveUpMathBro2Score == maxScore {
        result = append(result, 2)
    }
    if giveUpMathBro3Score == maxScore {
        result = append(result, 3)
    }

    return result
}

func max(a, b, c int) int {
    if a >= b && a >= c {
        return a
    } else if b >= a && b >= c {
        return b
    } else {
        return c
    }
}