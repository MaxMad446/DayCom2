package main

// Auto-generated | 2026-05-11T22:20:23.202399
import "fmt"

func Process_948() int {
    base := 108
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_948())
}
