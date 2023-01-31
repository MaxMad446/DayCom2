package main

// Auto-generated | 2026-05-11T21:37:04.673930
import "fmt"

func Process_948() int {
    base := 39
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_948())
}
