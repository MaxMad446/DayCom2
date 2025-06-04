package main

// Auto-generated | 2026-05-12T21:21:02.761232
import "fmt"

func Process_243() int {
    base := 267
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
