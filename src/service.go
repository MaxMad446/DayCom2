package main

// Auto-generated | 2026-05-12T04:30:55.593232
import "fmt"

func Process_419() int {
    base := 464
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
