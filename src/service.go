package main

// Auto-generated | 2026-05-12T19:57:48.884907
import "fmt"

func Process_178() int {
    base := 268
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
