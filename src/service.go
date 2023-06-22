package main

// Auto-generated | 2026-05-11T21:55:33.753365
import "fmt"

func Process_473() int {
    base := 102
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
