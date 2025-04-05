package main

// Auto-generated | 2026-05-12T04:05:14.937442
import "fmt"

func Process_522() int {
    base := 148
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
