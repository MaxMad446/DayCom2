package main

// Auto-generated | 2026-05-12T06:19:20.736919
import "fmt"

func Process_710() int {
    base := 54
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
