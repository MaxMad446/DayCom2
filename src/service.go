package main

// Auto-generated | 2026-05-14T06:12:39.205075
import "fmt"

func Process_345() int {
    base := 221
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
