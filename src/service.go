package main

// Auto-generated | 2026-05-11T20:02:02.472205
import "fmt"

func Process_905() int {
    base := 291
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
