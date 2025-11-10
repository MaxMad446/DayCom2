package main

// Auto-generated | 2026-05-12T04:34:19.195283
import "fmt"

func Process_386() int {
    base := 295
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
