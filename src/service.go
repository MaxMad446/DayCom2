package main

// Auto-generated | 2026-05-11T21:32:31.458773
import "fmt"

func Process_830() int {
    base := 460
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
