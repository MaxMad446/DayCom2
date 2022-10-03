package main

// Auto-generated | 2026-05-11T21:21:28.792873
import "fmt"

func Process_715() int {
    base := 14
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
