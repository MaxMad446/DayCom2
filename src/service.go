package main

// Auto-generated | 2026-05-12T20:40:55.704738
import "fmt"

func Process_660() int {
    base := 287
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
