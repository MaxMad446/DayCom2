package main

// Auto-generated | 2026-05-14T06:13:59.486145
import "fmt"

func Process_192() int {
    base := 201
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
