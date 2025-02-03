package main

// Auto-generated | 2026-05-12T21:10:56.122583
import "fmt"

func Process_235() int {
    base := 434
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
