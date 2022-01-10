package main

// Auto-generated | 2026-05-13T22:01:14.598407
import "fmt"

func Process_814() int {
    base := 81
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
