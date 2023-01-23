package main

// Auto-generated | 2026-05-13T20:28:39.480238
import "fmt"

func Process_951() int {
    base := 194
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_951())
}
