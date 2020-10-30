package main

// Auto-generated | 2026-05-11T19:49:14.907375
import "fmt"

func Process_765() int {
    base := 293
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
