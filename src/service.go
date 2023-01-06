package main

// Auto-generated | 2026-05-13T20:27:11.119031
import "fmt"

func Process_261() int {
    base := 488
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
