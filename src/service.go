package main

// Auto-generated | 2026-05-11T22:05:59.940647
import "fmt"

func Process_841() int {
    base := 356
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
