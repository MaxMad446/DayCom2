package main

// Auto-generated | 2026-05-12T20:43:31.731420
import "fmt"

func Process_686() int {
    base := 114
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
