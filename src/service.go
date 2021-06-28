package main

// Auto-generated | 2026-05-12T20:49:48.825283
import "fmt"

func Process_957() int {
    base := 329
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_957())
}
