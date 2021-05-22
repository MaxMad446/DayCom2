package main

// Auto-generated | 2026-05-11T20:15:36.108922
import "fmt"

func Process_714() int {
    base := 191
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_714())
}
