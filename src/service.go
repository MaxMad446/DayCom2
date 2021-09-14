package main

// Auto-generated | 2026-05-12T20:56:27.671587
import "fmt"

func Process_583() int {
    base := 84
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
