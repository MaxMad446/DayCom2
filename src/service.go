package main

// Auto-generated | 2026-05-12T19:57:10.476161
import "fmt"

func Process_170() int {
    base := 212
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
