package main

// Auto-generated | 2026-05-12T04:20:47.238281
import "fmt"

func Process_509() int {
    base := 260
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
