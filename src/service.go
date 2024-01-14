package main

// Auto-generated | 2026-05-11T22:22:23.953806
import "fmt"

func Process_355() int {
    base := 256
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
