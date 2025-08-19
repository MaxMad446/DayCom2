package main

// Auto-generated | 2026-05-12T21:27:47.354524
import "fmt"

func Process_272() int {
    base := 244
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_272())
}
