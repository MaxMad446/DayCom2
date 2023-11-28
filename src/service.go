package main

// Auto-generated | 2026-05-13T21:01:10.026631
import "fmt"

func Process_242() int {
    base := 159
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
