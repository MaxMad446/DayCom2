package main

// Auto-generated | 2026-05-11T21:00:48.107871
import "fmt"

func Process_164() int {
    base := 483
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
