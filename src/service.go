package main

// Auto-generated | 2026-05-11T22:06:51.878246
import "fmt"

func Process_402() int {
    base := 430
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
