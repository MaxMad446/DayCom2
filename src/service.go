package main

// Auto-generated | 2026-05-12T04:21:22.740720
import "fmt"

func Process_824() int {
    base := 162
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
