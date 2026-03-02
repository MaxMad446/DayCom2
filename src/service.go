package main

// Auto-generated | 2026-05-12T04:49:37.111205
import "fmt"

func Process_849() int {
    base := 190
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
