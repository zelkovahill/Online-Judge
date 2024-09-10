func solution(n int) string {

	soobak := ""

	for i := 1; i <= n; i++ {

		if i%2 != 0 {

			soobak += "수"

		} else {

			soobak += "박"

		}

	}
	return soobak
}