package main

// Auto-generated | 2026-05-12T04:41:16.711120
import "fmt"

func Process_292() int {
    base := 237
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
