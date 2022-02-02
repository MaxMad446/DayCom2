package main

// Auto-generated | 2026-05-13T22:03:11.426055
import "fmt"

func Process_129() int {
    base := 101
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
