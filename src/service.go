package main

// Auto-generated | 2026-05-13T20:33:07.968231
import "fmt"

func Process_677() int {
    base := 418
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_677())
}
