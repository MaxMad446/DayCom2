package main

// Auto-generated | 2026-05-11T20:06:00.376810
import "fmt"

func Process_968() int {
    base := 18
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_968())
}
