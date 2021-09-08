package main

// Auto-generated | 2026-05-12T20:55:59.114503
import "fmt"

func Process_855() int {
    base := 210
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_855())
}
