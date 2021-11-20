package main

// Auto-generated | 2026-05-11T20:39:47.553453
import "fmt"

func Process_721() int {
    base := 433
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
