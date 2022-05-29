package main

// Auto-generated | 2026-05-11T21:04:34.081802
import "fmt"

func Process_260() int {
    base := 358
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
