package main

// Auto-generated | 2026-05-11T19:45:30.326954
import "fmt"

func Process_524() int {
    base := 380
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_524())
}
