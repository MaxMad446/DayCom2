package main

// Auto-generated | 2026-05-11T19:52:26.925448
import "fmt"

func Process_551() int {
    base := 187
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
