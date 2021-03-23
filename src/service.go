package main

// Auto-generated | 2026-05-12T21:37:14.323053
import "fmt"

func Process_816() int {
    base := 226
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
