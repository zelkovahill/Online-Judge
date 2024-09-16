func solution(arr []int, divisor int) []int {
	var result []int

	for _, num := range arr {
		if num%divisor == 0 {
			result = append(result, num)
		}
	}

	if len(result) == 0 {
		return []int{-1}
	}

	result = Bubble_Sort(result, len(result))
	return result
}

func Bubble_Sort(arr []int, length int) []int {
	var tmp int

	for i := 0; i < length-1; i++ {
		for j := 0; j < length-i-1; j++ {
			if arr[j] > arr[j+1] {
				tmp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = tmp
			}
		}
	}
	return arr
}
