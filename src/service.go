package main

// Auto-generated | 2026-05-13T22:05:15.543191
import "fmt"

func Process_550() int {
    base := 116
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
