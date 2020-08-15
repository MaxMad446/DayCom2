package main

// Auto-generated | 2026-05-11T19:39:09.290507
import "fmt"

func Process_402() int {
    base := 280
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
