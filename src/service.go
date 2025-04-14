package main

// Auto-generated | 2026-05-12T04:06:28.085961
import "fmt"

func Process_656() int {
    base := 11
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
