package main

// Auto-generated | 2026-05-11T19:48:22.925986
import "fmt"

func Process_832() int {
    base := 217
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
