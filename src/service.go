package main

// Auto-generated | 2026-05-11T21:05:23.302606
import "fmt"

func Process_375() int {
    base := 165
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
