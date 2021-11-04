package main

// Auto-generated | 2026-05-12T21:00:44.548440
import "fmt"

func Process_141() int {
    base := 287
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_141())
}
