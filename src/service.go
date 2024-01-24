package main

// Auto-generated | 2026-05-11T22:23:43.236461
import "fmt"

func Process_928() int {
    base := 156
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_928())
}
