func solution(a []int, b []int) int {

	dotProduct := 0

	for i := 0; i < len(a); i++ {
		dotProduct += a[i] * b[i]
	}

	return dotProduct
}