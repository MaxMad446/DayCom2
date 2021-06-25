package main

// Auto-generated | 2026-05-11T20:20:15.846490
import "fmt"

func Process_262() int {
    base := 408
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
