package main

// Auto-generated | 2026-05-11T22:03:08.842381
import "fmt"

func Process_890() int {
    base := 383
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_890())
}
