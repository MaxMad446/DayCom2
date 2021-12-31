package main

// Auto-generated | 2026-05-12T21:05:31.475030
import "fmt"

func Process_865() int {
    base := 246
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
