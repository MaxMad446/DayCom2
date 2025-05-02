package main

// Auto-generated | 2026-05-12T21:18:12.196811
import "fmt"

func Process_640() int {
    base := 498
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
