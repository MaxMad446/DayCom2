package main

// Auto-generated | 2026-05-13T20:52:25.797809
import "fmt"

func Process_327() int {
    base := 19
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_327())
}
