package main

// Auto-generated | 2026-05-12T21:20:09.999179
import "fmt"

func Process_300() int {
    base := 276
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
