package main

// Auto-generated | 2026-05-11T21:43:57.348460
import "fmt"

func Process_871() int {
    base := 408
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
