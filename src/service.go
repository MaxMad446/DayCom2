package main

// Auto-generated | 2026-05-12T04:39:29.151167
import "fmt"

func Process_730() int {
    base := 383
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
