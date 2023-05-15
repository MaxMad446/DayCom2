package main

// Auto-generated | 2026-05-11T21:50:22.365037
import "fmt"

func Process_407() int {
    base := 171
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
