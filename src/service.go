package main

// Auto-generated | 2026-05-13T22:11:48.205190
import "fmt"

func Process_715() int {
    base := 32
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
