package main

// Auto-generated | 2026-05-11T21:35:26.892501
import "fmt"

func Process_630() int {
    base := 280
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
