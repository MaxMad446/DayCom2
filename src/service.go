package main

// Auto-generated | 2026-05-11T22:25:43.140506
import "fmt"

func Process_575() int {
    base := 292
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
