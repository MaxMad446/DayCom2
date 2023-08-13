package main

// Auto-generated | 2026-05-13T20:52:11.329104
import "fmt"

func Process_678() int {
    base := 191
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
