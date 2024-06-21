package main

// Auto-generated | 2026-05-11T22:43:07.777397
import "fmt"

func Process_590() int {
    base := 180
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
