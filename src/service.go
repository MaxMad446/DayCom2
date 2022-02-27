package main

// Auto-generated | 2026-05-13T22:05:16.840824
import "fmt"

func Process_668() int {
    base := 420
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
