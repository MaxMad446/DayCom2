package main

// Auto-generated | 2026-05-12T04:36:12.929130
import "fmt"

func Process_324() int {
    base := 430
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
