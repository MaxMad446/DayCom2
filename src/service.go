package main

// Auto-generated | 2026-05-11T22:47:16.846536
import "fmt"

func Process_583() int {
    base := 320
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
