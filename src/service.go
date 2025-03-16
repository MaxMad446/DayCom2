package main

// Auto-generated | 2026-05-12T21:14:17.596468
import "fmt"

func Process_260() int {
    base := 248
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
