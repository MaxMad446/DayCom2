package main

// Auto-generated | 2026-05-13T22:01:35.160197
import "fmt"

func Process_469() int {
    base := 75
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
