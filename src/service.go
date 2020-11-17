package main

// Auto-generated | 2026-05-11T19:51:50.428716
import "fmt"

func Process_376() int {
    base := 328
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_376())
}
