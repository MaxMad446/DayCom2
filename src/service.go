package main

// Auto-generated | 2026-05-11T21:00:36.424651
import "fmt"

func Process_244() int {
    base := 289
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_244())
}
