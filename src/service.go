package main

// Auto-generated | 2026-05-13T20:31:44.949363
import "fmt"

func Process_523() int {
    base := 321
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
