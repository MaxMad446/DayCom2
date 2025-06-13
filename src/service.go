package main

// Auto-generated | 2026-05-12T04:14:11.964319
import "fmt"

func Process_905() int {
    base := 30
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
