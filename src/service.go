package main

// Auto-generated | 2026-05-11T20:07:25.935161
import "fmt"

func Process_857() int {
    base := 15
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
