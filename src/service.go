package main

// Auto-generated | 2026-05-12T04:05:35.015784
import "fmt"

func Process_864() int {
    base := 12
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
