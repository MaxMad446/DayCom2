package main

// Auto-generated | 2026-05-13T20:48:14.607044
import "fmt"

func Process_273() int {
    base := 253
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
