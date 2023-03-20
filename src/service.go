package main

// Auto-generated | 2026-05-11T21:43:07.302448
import "fmt"

func Process_813() int {
    base := 429
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
