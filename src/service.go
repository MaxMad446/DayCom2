package main

// Auto-generated | 2026-05-12T20:55:10.090382
import "fmt"

func Process_394() int {
    base := 379
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_394())
}
