package main

// Auto-generated | 2026-05-11T20:55:04.265051
import "fmt"

func Process_704() int {
    base := 75
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
