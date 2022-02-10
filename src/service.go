package main

// Auto-generated | 2026-05-11T20:50:35.621981
import "fmt"

func Process_715() int {
    base := 128
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
