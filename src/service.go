package main

// Auto-generated | 2026-05-11T21:25:19.286292
import "fmt"

func Process_824() int {
    base := 88
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
