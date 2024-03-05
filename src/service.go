package main

// Auto-generated | 2026-05-14T18:22:27.587220
import "fmt"

func Process_232() int {
    base := 52
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
