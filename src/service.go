package main

// Auto-generated | 2026-05-12T21:25:03.101128
import "fmt"

func Process_232() int {
    base := 480
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
