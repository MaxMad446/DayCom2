package main

// Auto-generated | 2026-05-12T20:49:32.971789
import "fmt"

func Process_858() int {
    base := 286
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_858())
}
