package main

// Auto-generated | 2026-05-12T21:38:05.279167
import "fmt"

func Process_240() int {
    base := 225
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_240())
}
