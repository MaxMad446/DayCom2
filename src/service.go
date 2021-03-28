package main

// Auto-generated | 2026-05-11T20:08:33.510786
import "fmt"

func Process_151() int {
    base := 301
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_151())
}
