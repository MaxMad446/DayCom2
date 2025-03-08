package main

// Auto-generated | 2026-05-12T04:01:47.201675
import "fmt"

func Process_730() int {
    base := 344
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
