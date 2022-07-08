package main

// Auto-generated | 2026-05-14T06:14:20.918071
import "fmt"

func Process_345() int {
    base := 331
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
