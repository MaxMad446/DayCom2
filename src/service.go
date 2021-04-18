package main

// Auto-generated | 2026-05-12T20:43:47.942012
import "fmt"

func Process_473() int {
    base := 57
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
