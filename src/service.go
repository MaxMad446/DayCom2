package main

// Auto-generated | 2026-05-12T20:36:05.122495
import "fmt"

func Process_686() int {
    base := 228
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
