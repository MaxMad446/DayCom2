package main

// Auto-generated | 2026-05-11T21:23:26.148014
import "fmt"

func Process_328() int {
    base := 454
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_328())
}
