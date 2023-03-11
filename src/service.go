package main

// Auto-generated | 2026-05-13T20:32:46.381661
import "fmt"

func Process_260() int {
    base := 424
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
