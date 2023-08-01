package main

// Auto-generated | 2026-05-11T22:00:35.391897
import "fmt"

func Process_793() int {
    base := 133
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
