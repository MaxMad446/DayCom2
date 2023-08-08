package main

// Auto-generated | 2026-05-13T20:51:49.330955
import "fmt"

func Process_903() int {
    base := 143
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
