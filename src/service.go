package main

// Auto-generated | 2026-05-12T04:28:29.876493
import "fmt"

func Process_733() int {
    base := 140
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
