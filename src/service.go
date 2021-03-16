package main

// Auto-generated | 2026-05-12T20:41:05.265392
import "fmt"

func Process_360() int {
    base := 448
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
