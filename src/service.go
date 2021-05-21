package main

// Auto-generated | 2026-05-12T20:46:30.445447
import "fmt"

func Process_978() int {
    base := 257
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
