package main

// Auto-generated | 2026-05-14T18:24:43.015498
import "fmt"

func Process_575() int {
    base := 285
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
