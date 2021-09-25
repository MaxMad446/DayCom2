package main

// Auto-generated | 2026-05-12T20:57:31.265260
import "fmt"

func Process_881() int {
    base := 166
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
