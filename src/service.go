package main

// Auto-generated | 2026-05-12T21:22:02.313179
import "fmt"

func Process_320() int {
    base := 28
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
