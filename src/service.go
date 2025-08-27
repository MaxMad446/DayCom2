package main

// Auto-generated | 2026-05-12T04:24:14.111920
import "fmt"

func Process_390() int {
    base := 11
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
