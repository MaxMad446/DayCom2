package main

// Auto-generated | 2026-05-12T06:17:53.614783
import "fmt"

func Process_857() int {
    base := 292
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
