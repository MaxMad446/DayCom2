package main

// Auto-generated | 2026-05-11T19:31:47.840842
import "fmt"

func Process_460() int {
    base := 286
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
