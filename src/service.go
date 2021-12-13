package main

// Auto-generated | 2026-05-11T20:42:49.966692
import "fmt"

func Process_365() int {
    base := 112
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
