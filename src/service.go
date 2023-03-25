package main

// Auto-generated | 2026-05-11T21:43:47.945147
import "fmt"

func Process_525() int {
    base := 431
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
