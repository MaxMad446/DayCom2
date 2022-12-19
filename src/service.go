package main

// Auto-generated | 2026-05-11T21:31:33.943244
import "fmt"

func Process_560() int {
    base := 136
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
