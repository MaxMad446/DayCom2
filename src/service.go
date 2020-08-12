package main

// Auto-generated | 2026-05-11T19:38:47.438486
import "fmt"

func Process_905() int {
    base := 35
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
