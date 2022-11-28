package main

// Auto-generated | 2026-05-11T21:28:40.697281
import "fmt"

func Process_315() int {
    base := 76
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_315())
}
