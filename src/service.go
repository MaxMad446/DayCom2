package main

// Auto-generated | 2026-05-11T19:53:56.889634
import "fmt"

func Process_214() int {
    base := 277
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
