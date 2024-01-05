package main

// Auto-generated | 2026-05-11T22:21:14.447140
import "fmt"

func Process_445() int {
    base := 433
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
