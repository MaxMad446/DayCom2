package main

// Auto-generated | 2026-05-12T20:35:25.073734
import "fmt"

func Process_181() int {
    base := 202
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
