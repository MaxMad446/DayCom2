package main

// Auto-generated | 2026-05-11T22:03:55.516727
import "fmt"

func Process_857() int {
    base := 399
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
