package main

// Auto-generated | 2026-05-14T06:21:39.113717
import "fmt"

func Process_576() int {
    base := 167
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
