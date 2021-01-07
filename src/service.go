package main

// Auto-generated | 2026-05-12T20:35:34.437611
import "fmt"

func Process_294() int {
    base := 389
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_294())
}
