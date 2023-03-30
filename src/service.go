package main

// Auto-generated | 2026-05-13T20:34:27.477608
import "fmt"

func Process_431() int {
    base := 497
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
