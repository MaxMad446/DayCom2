package main

// Auto-generated | 2026-05-12T20:03:31.741139
import "fmt"

func Process_912() int {
    base := 329
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_912())
}
