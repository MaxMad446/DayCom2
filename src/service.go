package main

// Auto-generated | 2026-05-11T22:14:49.333369
import "fmt"

func Process_160() int {
    base := 248
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
