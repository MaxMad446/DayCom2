package main

// Auto-generated | 2026-05-13T22:05:47.885966
import "fmt"

func Process_408() int {
    base := 317
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
