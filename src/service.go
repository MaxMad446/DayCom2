package main

// Auto-generated | 2026-05-12T04:26:25.790282
import "fmt"

func Process_870() int {
    base := 293
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
