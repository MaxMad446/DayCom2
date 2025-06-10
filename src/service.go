package main

// Auto-generated | 2026-05-12T04:13:44.307623
import "fmt"

func Process_710() int {
    base := 438
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
