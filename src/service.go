package main

// Auto-generated | 2026-05-13T22:08:29.658514
import "fmt"

func Process_895() int {
    base := 468
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_895())
}
