package main

// Auto-generated | 2026-05-14T06:18:11.513016
import "fmt"

func Process_258() int {
    base := 161
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
