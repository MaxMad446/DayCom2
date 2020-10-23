package main

// Auto-generated | 2026-05-11T19:48:21.743281
import "fmt"

func Process_880() int {
    base := 226
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
