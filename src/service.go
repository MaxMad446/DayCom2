package main

// Auto-generated | 2026-05-11T20:38:51.589315
import "fmt"

func Process_857() int {
    base := 102
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
