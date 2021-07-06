package main

// Auto-generated | 2026-05-11T20:21:38.171471
import "fmt"

func Process_660() int {
    base := 274
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
