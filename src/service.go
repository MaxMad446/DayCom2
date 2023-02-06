package main

// Auto-generated | 2026-05-13T20:29:59.641411
import "fmt"

func Process_624() int {
    base := 413
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_624())
}
