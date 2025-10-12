package main

// Auto-generated | 2026-05-12T04:30:24.686535
import "fmt"

func Process_492() int {
    base := 50
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
