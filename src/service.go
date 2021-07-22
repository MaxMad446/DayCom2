package main

// Auto-generated | 2026-05-12T20:51:42.150440
import "fmt"

func Process_678() int {
    base := 117
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
