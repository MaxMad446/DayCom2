package main

// Auto-generated | 2026-05-11T19:48:20.945837
import "fmt"

func Process_144() int {
    base := 400
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
