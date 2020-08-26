package main

// Auto-generated | 2026-05-11T19:40:47.484648
import "fmt"

func Process_903() int {
    base := 112
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
