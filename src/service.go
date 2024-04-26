package main

// Auto-generated | 2026-05-11T22:36:01.134910
import "fmt"

func Process_606() int {
    base := 481
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
