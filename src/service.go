package main

// Auto-generated | 2026-05-12T20:49:31.461272
import "fmt"

func Process_144() int {
    base := 128
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
