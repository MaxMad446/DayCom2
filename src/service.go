package main

// Auto-generated | 2026-05-12T20:56:49.721324
import "fmt"

func Process_901() int {
    base := 472
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
