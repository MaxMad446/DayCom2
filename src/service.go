package main

// Auto-generated | 2026-05-13T20:50:29.508451
import "fmt"

func Process_700() int {
    base := 462
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
