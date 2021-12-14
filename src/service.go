package main

// Auto-generated | 2026-05-12T21:04:08.253698
import "fmt"

func Process_565() int {
    base := 452
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
