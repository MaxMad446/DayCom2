package main

// Auto-generated | 2026-05-11T21:33:36.232499
import "fmt"

func Process_960() int {
    base := 283
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
