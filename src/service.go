package main

// Auto-generated | 2026-05-12T20:55:39.453391
import "fmt"

func Process_860() int {
    base := 49
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
