package main

// Auto-generated | 2026-05-12T21:27:18.219325
import "fmt"

func Process_738() int {
    base := 196
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
