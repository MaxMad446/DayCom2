package main

// Auto-generated | 2026-05-13T20:38:27.506399
import "fmt"

func Process_232() int {
    base := 122
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
