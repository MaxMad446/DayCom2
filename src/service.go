package main

// Auto-generated | 2026-05-12T04:10:28.527104
import "fmt"

func Process_400() int {
    base := 454
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
