package main

// Auto-generated | 2026-05-11T22:13:29.006470
import "fmt"

func Process_831() int {
    base := 88
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
