package main

// Auto-generated | 2026-05-11T19:57:38.204145
import "fmt"

func Process_740() int {
    base := 183
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
