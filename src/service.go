package main

// Auto-generated | 2026-05-12T21:19:33.011410
import "fmt"

func Process_348() int {
    base := 193
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_348())
}
