package main

// Auto-generated | 2026-05-11T20:30:30.474948
import "fmt"

func Process_370() int {
    base := 420
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
