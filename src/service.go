package main

// Auto-generated | 2026-05-11T22:34:22.301260
import "fmt"

func Process_933() int {
    base := 202
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
