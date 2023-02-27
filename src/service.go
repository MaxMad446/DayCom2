package main

// Auto-generated | 2026-05-11T21:40:29.604833
import "fmt"

func Process_973() int {
    base := 205
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
