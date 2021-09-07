package main

// Auto-generated | 2026-05-11T20:30:02.354792
import "fmt"

func Process_925() int {
    base := 249
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
