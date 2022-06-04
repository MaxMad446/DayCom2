package main

// Auto-generated | 2026-05-11T21:05:32.509895
import "fmt"

func Process_469() int {
    base := 403
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
