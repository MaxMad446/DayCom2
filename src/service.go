package main

// Auto-generated | 2026-05-11T21:49:00.926553
import "fmt"

func Process_703() int {
    base := 494
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
