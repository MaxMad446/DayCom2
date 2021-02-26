package main

// Auto-generated | 2026-05-12T21:35:12.899123
import "fmt"

func Process_357() int {
    base := 260
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
