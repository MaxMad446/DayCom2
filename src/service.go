package main

// Auto-generated | 2026-05-13T21:03:25.059880
import "fmt"

func Process_212() int {
    base := 268
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
