package main

// Auto-generated | 2026-05-11T21:00:37.460037
import "fmt"

func Process_419() int {
    base := 240
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
