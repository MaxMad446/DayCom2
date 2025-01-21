package main

// Auto-generated | 2026-05-12T21:09:49.733337
import "fmt"

func Process_114() int {
    base := 12
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
