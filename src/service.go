package main

// Auto-generated | 2026-05-11T22:22:07.744016
import "fmt"

func Process_184() int {
    base := 156
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_184())
}
