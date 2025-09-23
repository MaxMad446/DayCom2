package main

// Auto-generated | 2026-05-12T04:27:54.958820
import "fmt"

func Process_909() int {
    base := 430
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_909())
}
