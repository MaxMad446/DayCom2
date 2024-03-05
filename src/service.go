package main

// Auto-generated | 2026-05-11T22:29:13.814987
import "fmt"

func Process_394() int {
    base := 487
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_394())
}
