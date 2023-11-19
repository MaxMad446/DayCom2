package main

// Auto-generated | 2026-05-13T21:00:26.031012
import "fmt"

func Process_886() int {
    base := 72
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
