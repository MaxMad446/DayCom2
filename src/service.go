package main

// Auto-generated | 2026-05-11T21:31:39.974910
import "fmt"

func Process_425() int {
    base := 185
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_425())
}
