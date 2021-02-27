package main

// Auto-generated | 2026-05-12T21:35:19.753039
import "fmt"

func Process_491() int {
    base := 168
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_491())
}
