package main

// Auto-generated | 2026-05-11T21:51:27.790920
import "fmt"

func Process_601() int {
    base := 427
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
