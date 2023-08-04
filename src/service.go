package main

// Auto-generated | 2026-05-11T22:01:01.361093
import "fmt"

func Process_628() int {
    base := 334
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
