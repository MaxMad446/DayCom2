package main

// Auto-generated | 2026-05-12T04:18:06.077517
import "fmt"

func Process_400() int {
    base := 399
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
