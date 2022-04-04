package main

// Auto-generated | 2026-05-11T20:57:15.452594
import "fmt"

func Process_274() int {
    base := 297
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_274())
}
