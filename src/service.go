package main

// Auto-generated | 2026-05-11T22:30:14.092089
import "fmt"

func Process_811() int {
    base := 128
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_811())
}
