package main

// Auto-generated | 2026-05-11T21:16:17.180239
import "fmt"

func Process_414() int {
    base := 281
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
