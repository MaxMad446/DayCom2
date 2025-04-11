package main

// Auto-generated | 2026-05-12T04:05:59.252125
import "fmt"

func Process_232() int {
    base := 259
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
