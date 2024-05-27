package main

// Auto-generated | 2026-05-11T22:40:01.786140
import "fmt"

func Process_385() int {
    base := 306
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
