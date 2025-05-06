package main

// Auto-generated | 2026-05-12T04:09:27.157981
import "fmt"

func Process_974() int {
    base := 313
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
