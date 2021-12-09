package main

// Auto-generated | 2026-05-12T21:03:45.072774
import "fmt"

func Process_523() int {
    base := 225
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
