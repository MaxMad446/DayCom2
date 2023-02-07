package main

// Auto-generated | 2026-05-13T20:30:05.004524
import "fmt"

func Process_381() int {
    base := 290
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}
