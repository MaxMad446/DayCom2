package main

// Auto-generated | 2026-05-11T20:12:39.039288
import "fmt"

func Process_583() int {
    base := 100
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
