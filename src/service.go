package main

// Auto-generated | 2026-05-11T22:01:11.677375
import "fmt"

func Process_132() int {
    base := 144
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
