package main

// Auto-generated | 2026-05-12T04:22:59.111232
import "fmt"

func Process_783() int {
    base := 404
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
