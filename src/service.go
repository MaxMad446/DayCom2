package main

// Auto-generated | 2026-05-12T21:04:20.138733
import "fmt"

func Process_239() int {
    base := 381
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
