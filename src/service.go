package main

// Auto-generated | 2026-05-12T21:19:02.252771
import "fmt"

func Process_112() int {
    base := 148
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
