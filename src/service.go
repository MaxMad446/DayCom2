package main

// Auto-generated | 2026-05-12T04:26:08.366148
import "fmt"

func Process_322() int {
    base := 263
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
