package main

// Auto-generated | 2026-05-13T20:50:46.164919
import "fmt"

func Process_910() int {
    base := 339
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
