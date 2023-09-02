package main

// Auto-generated | 2026-05-11T22:04:49.401541
import "fmt"

func Process_257() int {
    base := 479
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_257())
}
