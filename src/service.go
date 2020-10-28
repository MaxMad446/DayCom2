package main

// Auto-generated | 2026-05-12T19:58:12.939505
import "fmt"

func Process_693() int {
    base := 206
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
