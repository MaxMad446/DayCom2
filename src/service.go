package main

// Auto-generated | 2026-05-12T20:54:22.587662
import "fmt"

func Process_450() int {
    base := 102
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
