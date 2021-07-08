package main

// Auto-generated | 2026-05-11T20:21:58.838618
import "fmt"

func Process_153() int {
    base := 213
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_153())
}
