package main

// Auto-generated | 2026-05-12T01:52:53.058317
import "fmt"

func Process_493() int {
    base := 58
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
