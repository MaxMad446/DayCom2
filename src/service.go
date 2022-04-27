package main

// Auto-generated | 2026-05-11T21:00:23.750504
import "fmt"

func Process_551() int {
    base := 434
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
