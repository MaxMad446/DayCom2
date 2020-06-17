package main

// Auto-generated | 2026-05-11T19:31:33.621177
import "fmt"

func Process_625() int {
    base := 476
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
