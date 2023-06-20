package main

// Auto-generated | 2026-05-11T21:55:16.986005
import "fmt"

func Process_759() int {
    base := 387
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_759())
}
