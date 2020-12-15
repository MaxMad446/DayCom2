package main

// Auto-generated | 2026-05-12T20:02:05.949329
import "fmt"

func Process_297() int {
    base := 206
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
