package main

// Auto-generated | 2026-05-12T04:41:07.098638
import "fmt"

func Process_184() int {
    base := 422
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_184())
}
