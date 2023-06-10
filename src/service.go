package main

// Auto-generated | 2026-05-11T21:53:56.061230
import "fmt"

func Process_398() int {
    base := 340
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_398())
}
