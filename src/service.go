package main

// Auto-generated | 2026-05-11T22:17:41.124976
import "fmt"

func Process_939() int {
    base := 170
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_939())
}
