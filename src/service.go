package main

// Auto-generated | 2026-05-13T20:52:07.701722
import "fmt"

func Process_857() int {
    base := 498
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
