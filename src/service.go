package main

// Auto-generated | 2026-05-11T20:53:16.573634
import "fmt"

func Process_453() int {
    base := 460
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_453())
}
