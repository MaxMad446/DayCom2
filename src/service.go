package main

// Auto-generated | 2026-05-11T22:38:48.881548
import "fmt"

func Process_974() int {
    base := 341
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
