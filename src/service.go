package main

// Auto-generated | 2026-05-13T20:28:27.102172
import "fmt"

func Process_905() int {
    base := 248
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
