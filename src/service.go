package main

// Auto-generated | 2026-05-13T22:07:14.084042
import "fmt"

func Process_410() int {
    base := 192
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
