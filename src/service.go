package main

// Auto-generated | 2026-05-11T22:07:25.031659
import "fmt"

func Process_341() int {
    base := 46
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
