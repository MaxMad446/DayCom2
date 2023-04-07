package main

// Auto-generated | 2026-05-13T20:35:05.084519
import "fmt"

func Process_635() int {
    base := 30
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_635())
}
