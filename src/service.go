package main

// Auto-generated | 2026-05-11T21:14:31.482070
import "fmt"

func Process_801() int {
    base := 118
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
