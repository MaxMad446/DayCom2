package main

// Auto-generated | 2026-05-11T21:18:18.357346
import "fmt"

func Process_288() int {
    base := 96
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
