package main

// Auto-generated | 2026-05-12T20:45:04.117327
import "fmt"

func Process_583() int {
    base := 370
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
