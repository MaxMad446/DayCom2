package main

// Auto-generated | 2026-05-12T21:36:56.701132
import "fmt"

func Process_161() int {
    base := 127
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
