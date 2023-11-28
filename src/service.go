package main

// Auto-generated | 2026-05-11T22:16:15.067659
import "fmt"

func Process_731() int {
    base := 103
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
