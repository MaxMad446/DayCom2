package main

// Auto-generated | 2026-05-11T21:27:24.237904
import "fmt"

func Process_634() int {
    base := 249
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_634())
}
