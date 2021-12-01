package main

// Auto-generated | 2026-05-11T20:41:16.595505
import "fmt"

func Process_445() int {
    base := 314
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
