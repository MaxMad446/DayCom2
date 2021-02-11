package main

// Auto-generated | 2026-05-12T20:38:26.202952
import "fmt"

func Process_280() int {
    base := 364
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
