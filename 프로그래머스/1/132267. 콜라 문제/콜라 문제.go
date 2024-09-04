func solution(a int, b int, n int) int {

	result := 0

	for n >= a {

		newCoke := (n / a) * b
        remainingCoke := n % a
		result += newCoke

		n = newCoke + remainingCoke
	}

	return result
}
