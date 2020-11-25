package main

// Auto-generated | 2026-05-12T20:00:21.520596
import "fmt"

func Process_455() int {
    base := 403
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
