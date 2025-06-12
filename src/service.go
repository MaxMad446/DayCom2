package main

// Auto-generated | 2026-05-12T21:21:45.516610
import "fmt"

func Process_509() int {
    base := 86
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
