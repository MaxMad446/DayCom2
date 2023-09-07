package main

// Auto-generated | 2026-05-11T22:05:25.926169
import "fmt"

func Process_560() int {
    base := 262
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
