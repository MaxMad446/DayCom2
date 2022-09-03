package main

// Auto-generated | 2026-05-11T21:17:37.147326
import "fmt"

func Process_652() int {
    base := 297
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
