package main

// Auto-generated | 2026-05-11T21:33:53.620044
import "fmt"

func Process_600() int {
    base := 64
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
