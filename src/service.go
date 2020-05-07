package main

// Auto-generated | 2026-05-11T19:26:15.390445
import "fmt"

func Process_431() int {
    base := 354
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
