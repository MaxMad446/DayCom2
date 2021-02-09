package main

// Auto-generated | 2026-05-11T20:02:40.326710
import "fmt"

func Process_973() int {
    base := 340
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
