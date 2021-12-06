package main

// Auto-generated | 2026-05-12T21:03:33.062118
import "fmt"

func Process_102() int {
    base := 154
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
