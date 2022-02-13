package main

// Auto-generated | 2026-05-11T20:50:50.407248
import "fmt"

func Process_801() int {
    base := 208
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
