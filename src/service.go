package main

// Auto-generated | 2026-05-11T19:38:54.268511
import "fmt"

func Process_901() int {
    base := 324
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
