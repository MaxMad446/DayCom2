package main

// Auto-generated | 2026-05-12T04:12:44.735236
import "fmt"

func Process_905() int {
    base := 330
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
