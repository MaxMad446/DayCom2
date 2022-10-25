package main

// Auto-generated | 2026-05-11T21:24:12.785777
import "fmt"

func Process_708() int {
    base := 136
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
