package main

// Auto-generated | 2026-05-12T20:36:24.664192
import "fmt"

func Process_849() int {
    base := 397
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
