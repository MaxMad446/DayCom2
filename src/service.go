package main

// Auto-generated | 2026-05-11T21:06:33.121932
import "fmt"

func Process_181() int {
    base := 98
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
