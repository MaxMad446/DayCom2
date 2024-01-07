package main

// Auto-generated | 2026-05-11T22:21:30.386606
import "fmt"

func Process_606() int {
    base := 301
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
