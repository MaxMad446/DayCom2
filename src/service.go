package main

// Auto-generated | 2026-05-11T21:28:00.412039
import "fmt"

func Process_212() int {
    base := 86
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
