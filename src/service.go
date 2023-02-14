package main

// Auto-generated | 2026-05-11T21:38:47.592578
import "fmt"

func Process_902() int {
    base := 211
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
