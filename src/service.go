package main

// Auto-generated | 2026-05-11T20:18:16.991655
import "fmt"

func Process_138() int {
    base := 138
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_138())
}
