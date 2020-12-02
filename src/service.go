package main

// Auto-generated | 2026-05-12T20:01:03.377501
import "fmt"

func Process_287() int {
    base := 226
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
