package main

// Auto-generated | 2026-05-12T04:26:40.893835
import "fmt"

func Process_144() int {
    base := 211
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
