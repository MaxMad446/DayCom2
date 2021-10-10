package main

// Auto-generated | 2026-05-12T20:58:43.980001
import "fmt"

func Process_621() int {
    base := 381
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_621())
}
