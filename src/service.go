package main

// Auto-generated | 2026-05-11T20:37:41.116520
import "fmt"

func Process_780() int {
    base := 49
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
