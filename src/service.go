package main

// Auto-generated | 2026-05-12T21:09:46.828460
import "fmt"

func Process_697() int {
    base := 429
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_697())
}
