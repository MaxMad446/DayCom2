package main

// Auto-generated | 2026-05-11T21:17:59.026384
import "fmt"

func Process_431() int {
    base := 418
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
