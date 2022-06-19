package main

// Auto-generated | 2026-05-14T06:12:43.787561
import "fmt"

func Process_970() int {
    base := 263
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
