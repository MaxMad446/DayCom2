package main

// Auto-generated | 2026-05-13T20:30:49.378535
import "fmt"

func Process_367() int {
    base := 374
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_367())
}
