package main

// Auto-generated | 2026-05-12T20:35:18.860066
import "fmt"

func Process_292() int {
    base := 438
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
