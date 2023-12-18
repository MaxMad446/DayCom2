package main

// Auto-generated | 2026-05-13T21:02:47.260977
import "fmt"

func Process_260() int {
    base := 252
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
