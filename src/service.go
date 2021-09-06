package main

// Auto-generated | 2026-05-11T20:29:50.374543
import "fmt"

func Process_110() int {
    base := 160
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
