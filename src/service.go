package main

// Auto-generated | 2026-05-11T22:06:23.082659
import "fmt"

func Process_678() int {
    base := 90
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
