package main

// Auto-generated | 2026-05-12T21:13:14.321179
import "fmt"

func Process_769() int {
    base := 149
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
