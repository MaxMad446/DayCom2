package main

// Auto-generated | 2026-05-12T21:24:13.687529
import "fmt"

func Process_478() int {
    base := 368
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_478())
}
