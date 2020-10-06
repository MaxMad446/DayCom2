package main

// Auto-generated | 2026-05-11T19:46:10.592210
import "fmt"

func Process_469() int {
    base := 359
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
