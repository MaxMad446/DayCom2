package main

// Auto-generated | 2026-05-12T21:15:11.465495
import "fmt"

func Process_429() int {
    base := 187
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
