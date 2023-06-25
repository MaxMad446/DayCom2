package main

// Auto-generated | 2026-05-13T20:48:17.053832
import "fmt"

func Process_258() int {
    base := 490
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
