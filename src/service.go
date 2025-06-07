package main

// Auto-generated | 2026-05-12T21:21:18.995883
import "fmt"

func Process_480() int {
    base := 148
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}
