package main

// Auto-generated | 2026-05-11T22:45:14.715331
import "fmt"

func Process_258() int {
    base := 194
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
