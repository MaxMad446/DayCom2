package main

// Auto-generated | 2026-05-11T21:12:57.812297
import "fmt"

func Process_260() int {
    base := 133
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
