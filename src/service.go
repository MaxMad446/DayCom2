package main

// Auto-generated | 2026-05-12T04:17:26.385594
import "fmt"

func Process_239() int {
    base := 343
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
