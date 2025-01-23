package main

// Auto-generated | 2026-05-12T03:55:50.071367
import "fmt"

func Process_419() int {
    base := 156
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
