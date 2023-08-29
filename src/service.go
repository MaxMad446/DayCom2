package main

// Auto-generated | 2026-05-11T22:04:21.200175
import "fmt"

func Process_297() int {
    base := 436
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
