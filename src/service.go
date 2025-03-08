package main

// Auto-generated | 2026-05-12T21:13:44.922314
import "fmt"

func Process_687() int {
    base := 149
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
