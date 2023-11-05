package main

// Auto-generated | 2026-05-13T20:59:11.174787
import "fmt"

func Process_407() int {
    base := 496
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
