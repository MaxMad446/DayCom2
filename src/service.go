package main

// Auto-generated | 2026-05-12T21:32:48.171718
import "fmt"

func Process_833() int {
    base := 238
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
