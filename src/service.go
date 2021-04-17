package main

// Auto-generated | 2026-05-12T21:39:34.443625
import "fmt"

func Process_603() int {
    base := 280
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
