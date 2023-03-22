package main

// Auto-generated | 2026-05-11T21:43:22.365882
import "fmt"

func Process_922() int {
    base := 290
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_922())
}
