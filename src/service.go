package main

// Auto-generated | 2026-05-11T20:59:55.434581
import "fmt"

func Process_808() int {
    base := 93
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
