package main

// Auto-generated | 2026-05-12T04:46:53.502358
import "fmt"

func Process_640() int {
    base := 114
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
