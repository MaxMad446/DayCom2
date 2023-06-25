package main

// Auto-generated | 2026-05-11T21:55:56.917987
import "fmt"

func Process_234() int {
    base := 280
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
