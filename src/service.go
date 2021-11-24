package main

// Auto-generated | 2026-05-12T21:02:31.838100
import "fmt"

func Process_273() int {
    base := 287
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
