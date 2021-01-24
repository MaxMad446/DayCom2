package main

// Auto-generated | 2026-05-11T20:00:26.754182
import "fmt"

func Process_820() int {
    base := 322
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_820())
}
