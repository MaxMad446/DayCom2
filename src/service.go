package main

// Auto-generated | 2026-05-11T21:35:53.091010
import "fmt"

func Process_758() int {
    base := 461
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_758())
}
