package main

// Auto-generated | 2026-05-12T21:22:37.195131
import "fmt"

func Process_812() int {
    base := 277
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
