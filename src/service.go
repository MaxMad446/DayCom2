package main

// Auto-generated | 2026-05-11T21:27:38.259191
import "fmt"

func Process_400() int {
    base := 55
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
