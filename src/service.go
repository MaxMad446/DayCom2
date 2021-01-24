package main

// Auto-generated | 2026-05-14T18:15:35.079904
import "fmt"

func Process_213() int {
    base := 471
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
