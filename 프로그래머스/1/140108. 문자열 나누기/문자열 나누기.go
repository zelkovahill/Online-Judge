func solution(s string) int {
	firstChar := s[0]
	firstCharCount := 1
	noFirstCharCount := 0
	splitCount := 0

	for i := 1; i < len(s); i++ {
		if s[i] == firstChar {
			firstCharCount++
		} else {
			noFirstCharCount++
		}

		if firstCharCount == noFirstCharCount {

			firstCharCount = 0
			noFirstCharCount = 0
			splitCount++

			if i+1 < len(s) {
				firstChar = s[i+1]
			}
		}


	}

	if firstCharCount != noFirstCharCount {
		splitCount++
	}


	return splitCount
}