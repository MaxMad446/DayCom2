package main

// Auto-generated | 2026-05-11T22:37:34.169689
import "fmt"

func Process_175() int {
    base := 337
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
