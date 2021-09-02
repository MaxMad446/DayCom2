package main

// Auto-generated | 2026-05-11T20:29:19.041600
import "fmt"

func Process_657() int {
    base := 360
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
