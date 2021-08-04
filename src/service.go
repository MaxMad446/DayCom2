package main

// Auto-generated | 2026-05-11T20:25:31.665011
import "fmt"

func Process_790() int {
    base := 13
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
