package main

import (
	"fmt"
	"strconv"
	"strings"
)

// 00:00 형태를 초 단위로 변환
func minuteCalculation(time string) int {

	str := strings.Split(time, ":") // : 기준으로 minute 과 second
	minute, _ := strconv.Atoi(str[0])
	second, _ := strconv.Atoi(str[1])

	return minute*60 + second

}

// ===============(입력 매개 변수)===============
// string video_len			// 동영상의 길이
// string pos 					// 기능이 수행되기 직전의 재생 위치
// string op_start			// 오프닝 시작 시각
// string op_end				// 오프닝이 끝나는 시각
// string[] commands 		// 사용자의 입력

func solution(video_len string, pos string, op_start string, op_end string, commands []string) string {

	// 문자열형 입력 매개 변수(00:00) 형태를 초 단위로 변환
	videoLen := minuteCalculation(video_len) // 동영상의 길이
	position := minuteCalculation(pos)       // 기능이 수행되기 직전의 재생 위치
	opStart := minuteCalculation(op_start)   // 오프닝 시작 시각
	opEnd := minuteCalculation(op_end)       // 오프닝이 끝나는 시각

	// 0부터 명령 횟수만큼 반복
	for i := 0; i < len(commands); i++ {

		// ===== (오프닝 건너뛰기) =====
		// 현재 재생 위치가 오프닝 구간에 있을 경우 오프닝이 끝나는 위치로 이동
		if opStart <= position && position <= opEnd {

			position = opEnd

		}

		// ===== (prev 명령 입력 : 현재 위치에서 10초 전으로 이동)
		if commands[i] == "prev" {

			// 10초 미만인 0초로 초기화
			if position < 10 {

				position = 0

				// 아니라면 10초 이상이면 10초 감소
			} else {

				position -= 10

			}

			// ===== (next 명령 입력 : 현재 위치에서 10초 후로 이동)
		} else if commands[i] == "next" {

			// 현재 영상 위치가 동영상의 길이 보다 크다면 동영상의 길이로 초기화
			if position > videoLen-10 {

				position = videoLen

				// 아니라면 현재 영상 위치에 10 누적
			} else {

				position += 10

			}
		}

		// ===== (오프닝 건너뛰기) =====
		// 현재 재생 위치가 오프닝 구간에 있을 경우 오프닝이 끝나는 위치로 이동
		if opStart <= position && position <= opEnd {

			position = opEnd

		}

	}
	minutes := position / 60
	seconds := position % 60
	result := fmt.Sprintf("%02d:%02d", minutes, seconds)

	return result
}

