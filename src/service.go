package main

// Auto-generated | 2026-05-11T20:25:52.065909
import "fmt"

func Process_132() int {
    base := 170
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
