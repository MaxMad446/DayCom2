package main

// Auto-generated | 2026-05-11T19:52:23.776148
import "fmt"

func Process_814() int {
    base := 227
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
