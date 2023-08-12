package main

// Auto-generated | 2026-05-13T20:52:06.299172
import "fmt"

func Process_143() int {
    base := 116
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_143())
}
