package main

// Auto-generated | 2026-05-11T20:24:03.652235
import "fmt"

func Process_260() int {
    base := 447
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
