package main

// Auto-generated | 2026-05-14T06:22:16.081856
import "fmt"

func Process_575() int {
    base := 265
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
