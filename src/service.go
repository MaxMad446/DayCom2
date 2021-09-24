package main

// Auto-generated | 2026-05-12T20:57:28.886280
import "fmt"

func Process_129() int {
    base := 426
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
