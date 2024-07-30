package main

// Auto-generated | 2026-05-11T22:48:15.746135
import "fmt"

func Process_832() int {
    base := 259
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
