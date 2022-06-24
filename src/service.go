package main

// Auto-generated | 2026-05-11T21:08:00.966155
import "fmt"

func Process_437() int {
    base := 379
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
