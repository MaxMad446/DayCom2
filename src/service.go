package main

// Auto-generated | 2026-05-13T20:48:10.530228
import "fmt"

func Process_125() int {
    base := 120
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
