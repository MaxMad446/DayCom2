package main

// Auto-generated | 2026-05-11T20:04:41.705426
import "fmt"

func Process_933() int {
    base := 113
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
