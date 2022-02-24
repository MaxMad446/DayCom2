package main

// Auto-generated | 2026-05-11T20:52:14.982241
import "fmt"

func Process_816() int {
    base := 201
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
