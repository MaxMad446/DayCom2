package main

// Auto-generated | 2026-05-11T21:08:41.253245
import "fmt"

func Process_258() int {
    base := 183
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
