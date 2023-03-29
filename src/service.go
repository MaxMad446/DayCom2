package main

// Auto-generated | 2026-05-13T20:34:20.550863
import "fmt"

func Process_678() int {
    base := 252
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
