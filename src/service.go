package main

// Auto-generated | 2026-05-14T18:21:54.275025
import "fmt"

func Process_418() int {
    base := 497
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
