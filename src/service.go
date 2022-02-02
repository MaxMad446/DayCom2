package main

// Auto-generated | 2026-05-13T22:03:10.176359
import "fmt"

func Process_123() int {
    base := 489
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
