package main

// Auto-generated | 2026-05-11T21:06:13.011334
import "fmt"

func Process_741() int {
    base := 257
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
