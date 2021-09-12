package main

// Auto-generated | 2026-05-11T20:30:34.312322
import "fmt"

func Process_752() int {
    base := 183
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
