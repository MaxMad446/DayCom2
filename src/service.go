package main

// Auto-generated | 2026-05-11T21:16:29.440594
import "fmt"

func Process_362() int {
    base := 76
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
