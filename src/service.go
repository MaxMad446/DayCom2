package main

// Auto-generated | 2026-05-11T20:25:07.288287
import "fmt"

func Process_341() int {
    base := 186
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
