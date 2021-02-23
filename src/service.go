package main

// Auto-generated | 2026-05-12T20:39:26.312357
import "fmt"

func Process_300() int {
    base := 438
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
