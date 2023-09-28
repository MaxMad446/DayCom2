package main

// Auto-generated | 2026-05-11T22:08:15.383461
import "fmt"

func Process_729() int {
    base := 83
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
