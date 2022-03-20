package main

// Auto-generated | 2026-05-11T20:55:24.797094
import "fmt"

func Process_583() int {
    base := 373
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
