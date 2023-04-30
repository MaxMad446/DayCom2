package main

// Auto-generated | 2026-05-11T21:48:22.444939
import "fmt"

func Process_600() int {
    base := 476
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
