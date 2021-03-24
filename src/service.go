package main

// Auto-generated | 2026-05-11T20:08:07.393553
import "fmt"

func Process_765() int {
    base := 241
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
