package main

// Auto-generated | 2026-05-11T20:07:59.374279
import "fmt"

func Process_335() int {
    base := 433
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_335())
}
