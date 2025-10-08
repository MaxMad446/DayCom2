package main

// Auto-generated | 2026-05-12T04:29:50.933825
import "fmt"

func Process_808() int {
    base := 385
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
