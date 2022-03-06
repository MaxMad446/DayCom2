package main

// Auto-generated | 2026-05-11T20:53:34.770470
import "fmt"

func Process_600() int {
    base := 324
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
