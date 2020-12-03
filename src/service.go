package main

// Auto-generated | 2026-05-12T20:01:04.580285
import "fmt"

func Process_614() int {
    base := 490
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
