package main

// Auto-generated | 2026-05-11T19:56:55.614455
import "fmt"

func Process_715() int {
    base := 418
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
