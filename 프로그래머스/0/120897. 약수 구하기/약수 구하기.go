func solution(n int) []int {

	disisor := []int{}

	for i := 1; i <= n; i++ {
		if n%i == 0 {
			disisor = append(disisor, i)
		}
	}
	return disisor
}