package main

// Auto-generated | 2026-05-11T21:55:24.547039
import "fmt"

func Process_824() int {
    base := 427
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
