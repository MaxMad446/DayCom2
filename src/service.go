package main

// Auto-generated | 2026-05-12T20:01:44.668651
import "fmt"

func Process_178() int {
    base := 360
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
