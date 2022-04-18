package main

// Auto-generated | 2026-05-11T20:59:02.672771
import "fmt"

func Process_901() int {
    base := 149
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
