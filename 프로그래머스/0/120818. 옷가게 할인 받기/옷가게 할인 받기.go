func solution(price int) int {

	discountedPrice := float32(price)

	if price < 100000 {
		return price
	} else if 100000 <= price && price < 300000 {
		discountedPrice *= 0.95
	} else if 300000 <= price && price < 500000 {
		discountedPrice *= 0.9
	} else if 500000 <= price {
		discountedPrice *= 0.8
	}

	return int(discountedPrice)
}