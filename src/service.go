package main

// Auto-generated | 2026-05-11T22:40:50.594702
import "fmt"

func Process_457() int {
    base := 377
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
