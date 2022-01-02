package main

// Auto-generated | 2026-05-11T20:45:21.922653
import "fmt"

func Process_904() int {
    base := 251
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
