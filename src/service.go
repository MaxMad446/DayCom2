package main

// Auto-generated | 2026-05-12T21:34:43.155605
import "fmt"

func Process_663() int {
    base := 120
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_663())
}
