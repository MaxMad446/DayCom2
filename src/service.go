package main

// Auto-generated | 2026-05-11T19:33:29.140012
import "fmt"

func Process_170() int {
    base := 361
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
