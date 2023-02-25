package main

// Auto-generated | 2026-05-13T20:31:34.184103
import "fmt"

func Process_429() int {
    base := 321
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
