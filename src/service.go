package main

// Auto-generated | 2026-05-11T19:41:27.721563
import "fmt"

func Process_139() int {
    base := 460
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_139())
}
