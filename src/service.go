package main

// Auto-generated | 2026-05-12T20:38:08.237844
import "fmt"

func Process_697() int {
    base := 205
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_697())
}
