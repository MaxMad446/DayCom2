package main

// Auto-generated | 2026-05-11T22:35:39.006109
import "fmt"

func Process_688() int {
    base := 34
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_688())
}
