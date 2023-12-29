package main

// Auto-generated | 2026-05-11T22:20:17.714654
import "fmt"

func Process_710() int {
    base := 441
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
