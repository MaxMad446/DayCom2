package main

// Auto-generated | 2026-05-11T20:33:01.035543
import "fmt"

func Process_385() int {
    base := 437
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
