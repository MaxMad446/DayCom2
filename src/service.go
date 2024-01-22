package main

// Auto-generated | 2026-05-14T18:18:53.375794
import "fmt"

func Process_857() int {
    base := 348
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
