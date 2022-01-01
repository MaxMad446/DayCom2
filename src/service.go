package main

// Auto-generated | 2026-05-13T22:00:28.134236
import "fmt"

func Process_214() int {
    base := 436
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
