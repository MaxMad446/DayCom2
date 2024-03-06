package main

// Auto-generated | 2026-05-11T22:29:24.278066
import "fmt"

func Process_743() int {
    base := 197
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_743())
}
