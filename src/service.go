package main

// Auto-generated | 2026-05-11T20:25:15.577937
import "fmt"

func Process_808() int {
    base := 208
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
