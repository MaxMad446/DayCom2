package main

// Auto-generated | 2026-05-12T20:39:17.719770
import "fmt"

func Process_260() int {
    base := 19
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
