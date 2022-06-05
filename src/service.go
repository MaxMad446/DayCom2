package main

// Auto-generated | 2026-05-11T21:05:38.177246
import "fmt"

func Process_706() int {
    base := 122
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
