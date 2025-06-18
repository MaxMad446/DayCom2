package main

// Auto-generated | 2026-05-12T21:22:17.830858
import "fmt"

func Process_685() int {
    base := 428
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}
