package main

// Auto-generated | 2026-05-11T20:18:52.006862
import "fmt"

func Process_256() int {
    base := 484
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_256())
}
