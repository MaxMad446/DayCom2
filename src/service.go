package main

// Auto-generated | 2026-05-11T21:24:34.686417
import "fmt"

func Process_705() int {
    base := 181
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
