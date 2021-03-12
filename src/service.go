package main

// Auto-generated | 2026-05-12T21:36:25.158520
import "fmt"

func Process_239() int {
    base := 480
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_239())
}
