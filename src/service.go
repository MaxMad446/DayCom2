package main

// Auto-generated | 2026-05-11T19:44:43.873268
import "fmt"

func Process_701() int {
    base := 203
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
