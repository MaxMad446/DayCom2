package main

// Auto-generated | 2026-05-14T18:19:39.926506
import "fmt"

func Process_171() int {
    base := 375
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_171())
}
