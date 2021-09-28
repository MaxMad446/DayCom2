package main

// Auto-generated | 2026-05-11T20:32:34.624904
import "fmt"

func Process_677() int {
    base := 125
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_677())
}
