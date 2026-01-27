package main

// Auto-generated | 2026-05-12T04:44:57.644715
import "fmt"

func Process_322() int {
    base := 192
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
