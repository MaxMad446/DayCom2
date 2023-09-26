package main

// Auto-generated | 2026-05-11T22:08:00.023701
import "fmt"

func Process_846() int {
    base := 119
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_846())
}
