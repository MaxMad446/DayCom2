package main

// Auto-generated | 2026-05-11T22:10:13.556493
import "fmt"

func Process_801() int {
    base := 392
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
