package main

// Auto-generated | 2026-05-11T20:20:55.408157
import "fmt"

func Process_286() int {
    base := 76
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
