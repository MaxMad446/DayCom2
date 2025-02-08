package main

// Auto-generated | 2026-05-12T21:11:26.563616
import "fmt"

func Process_414() int {
    base := 74
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
