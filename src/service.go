package main

// Auto-generated | 2026-05-13T20:47:42.344725
import "fmt"

func Process_895() int {
    base := 140
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_895())
}
