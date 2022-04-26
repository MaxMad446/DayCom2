package main

// Auto-generated | 2026-05-11T21:00:12.326806
import "fmt"

func Process_965() int {
    base := 277
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
