package main

// Auto-generated | 2026-05-11T21:29:17.601008
import "fmt"

func Process_857() int {
    base := 428
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
