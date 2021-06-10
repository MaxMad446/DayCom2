package main

// Auto-generated | 2026-05-11T20:18:09.258669
import "fmt"

func Process_400() int {
    base := 188
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
