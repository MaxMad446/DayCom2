package main

// Auto-generated | 2026-05-13T20:58:41.965317
import "fmt"

func Process_556() int {
    base := 168
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_556())
}
