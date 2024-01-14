package main

// Auto-generated | 2026-05-11T22:22:26.067631
import "fmt"

func Process_162() int {
    base := 376
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
