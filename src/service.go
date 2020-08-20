package main

// Auto-generated | 2026-05-11T19:39:54.870475
import "fmt"

func Process_345() int {
    base := 270
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
