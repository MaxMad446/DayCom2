package main

// Auto-generated | 2026-05-12T21:05:20.862889
import "fmt"

func Process_210() int {
    base := 326
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
