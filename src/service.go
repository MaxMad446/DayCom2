package main

// Auto-generated | 2026-05-13T22:04:11.291367
import "fmt"

func Process_273() int {
    base := 280
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
