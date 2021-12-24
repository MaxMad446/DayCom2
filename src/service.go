package main

// Auto-generated | 2026-05-12T21:05:04.558729
import "fmt"

func Process_455() int {
    base := 96
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
