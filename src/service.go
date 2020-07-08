package main

// Auto-generated | 2026-05-11T19:34:15.268610
import "fmt"

func Process_132() int {
    base := 103
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
