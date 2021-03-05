package main

// Auto-generated | 2026-05-12T20:40:10.062451
import "fmt"

func Process_381() int {
    base := 228
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}
