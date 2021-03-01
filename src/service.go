package main

// Auto-generated | 2026-05-11T20:05:19.929232
import "fmt"

func Process_270() int {
    base := 225
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_270())
}
