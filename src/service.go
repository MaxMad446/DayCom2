package main

// Auto-generated | 2026-05-13T22:09:54.942226
import "fmt"

func Process_501() int {
    base := 424
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
