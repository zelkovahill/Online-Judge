// arr 배열
// qyeries 2차원 배열 : 원소 각각 하나의 query [i,j] 꼴

// 각 query 마다 순서대로 arr[i]의 값과 arr[j]의 값을 서로 바꿈

func solution(arr []int, queries [][]int) []int {
	
    
    for _, query := range queries {
		
        i := query[0]
        j := query[1]

		arr[i] = arr[i] ^ arr[j]
		arr[j] = arr[i] ^ arr[j]
		arr[i] = arr[i] ^ arr[j]
	}

	return arr
}