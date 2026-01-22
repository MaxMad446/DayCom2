package main

// Auto-generated | 2026-05-12T04:44:14.176663
import "fmt"

func Process_403() int {
    base := 293
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
