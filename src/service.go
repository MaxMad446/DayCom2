package main

// Auto-generated | 2026-05-11T20:13:18.122379
import "fmt"

func Process_481() int {
    base := 499
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
