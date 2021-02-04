package main

// Auto-generated | 2026-05-11T20:01:53.632794
import "fmt"

func Process_621() int {
    base := 392
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_621())
}
