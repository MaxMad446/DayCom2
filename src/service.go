package main

// Auto-generated | 2026-05-11T19:28:49.144757
import "fmt"

func Process_200() int {
    base := 158
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
