package main

// Auto-generated | 2026-05-12T20:56:59.667643
import "fmt"

func Process_488() int {
    base := 215
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
