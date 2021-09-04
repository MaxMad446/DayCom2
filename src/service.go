package main

// Auto-generated | 2026-05-12T20:55:35.106808
import "fmt"

func Process_300() int {
    base := 455
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
