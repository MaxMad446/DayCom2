package main

// Auto-generated | 2026-05-11T19:55:54.690252
import "fmt"

func Process_551() int {
    base := 13
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
