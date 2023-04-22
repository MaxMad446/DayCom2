package main

// Auto-generated | 2026-05-11T21:47:11.642681
import "fmt"

func Process_260() int {
    base := 431
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
