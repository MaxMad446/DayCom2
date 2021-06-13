package main

// Auto-generated | 2026-05-11T20:18:29.690806
import "fmt"

func Process_677() int {
    base := 480
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_677())
}
