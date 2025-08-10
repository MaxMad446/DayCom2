package main

// Auto-generated | 2026-05-12T21:26:57.393032
import "fmt"

func Process_470() int {
    base := 440
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_470())
}
