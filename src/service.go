package main

// Auto-generated | 2026-05-11T19:56:46.309476
import "fmt"

func Process_963() int {
    base := 395
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
