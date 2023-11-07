package main

// Auto-generated | 2026-05-11T22:13:33.646271
import "fmt"

func Process_221() int {
    base := 411
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
