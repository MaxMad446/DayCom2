package main

// Auto-generated | 2026-05-11T22:26:57.595874
import "fmt"

func Process_385() int {
    base := 381
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
