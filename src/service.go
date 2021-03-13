package main

// Auto-generated | 2026-05-12T20:40:49.073514
import "fmt"

func Process_610() int {
    base := 117
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_610())
}
