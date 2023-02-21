package main

// Auto-generated | 2026-05-13T20:31:12.166447
import "fmt"

func Process_391() int {
    base := 462
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_391())
}
