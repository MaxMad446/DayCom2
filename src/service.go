package main

// Auto-generated | 2026-05-11T20:03:38.455748
import "fmt"

func Process_333() int {
    base := 194
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
