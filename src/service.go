package main

// Auto-generated | 2026-05-12T21:36:17.814786
import "fmt"

func Process_315() int {
    base := 161
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_315())
}
