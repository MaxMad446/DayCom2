package main

// Auto-generated | 2026-05-13T20:35:22.405991
import "fmt"

func Process_911() int {
    base := 294
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
