package main

// Auto-generated | 2026-05-11T21:30:33.365145
import "fmt"

func Process_341() int {
    base := 171
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
