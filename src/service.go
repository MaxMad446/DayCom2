package main

// Auto-generated | 2026-05-11T20:01:28.909547
import "fmt"

func Process_385() int {
    base := 376
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
