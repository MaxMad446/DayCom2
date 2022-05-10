package main

// Auto-generated | 2026-05-11T21:02:06.341523
import "fmt"

func Process_419() int {
    base := 107
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
