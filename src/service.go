package main

// Auto-generated | 2026-05-12T20:39:57.945657
import "fmt"

func Process_849() int {
    base := 273
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
