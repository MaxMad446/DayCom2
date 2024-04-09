package main

// Auto-generated | 2026-05-11T22:33:47.938155
import "fmt"

func Process_956() int {
    base := 440
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_956())
}
