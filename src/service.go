package main

// Auto-generated | 2026-05-11T22:31:45.697178
import "fmt"

func Process_246() int {
    base := 188
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
