package main

// Auto-generated | 2026-05-12T21:41:00.217376
import "fmt"

func Process_865() int {
    base := 194
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
