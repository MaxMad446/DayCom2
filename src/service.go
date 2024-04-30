package main

// Auto-generated | 2026-05-14T18:26:54.183365
import "fmt"

func Process_763() int {
    base := 39
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
