package main

// Auto-generated | 2026-05-12T20:44:47.452413
import "fmt"

func Process_898() int {
    base := 273
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_898())
}
