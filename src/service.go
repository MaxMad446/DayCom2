package main

// Auto-generated | 2026-05-11T21:14:40.577824
import "fmt"

func Process_985() int {
    base := 200
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
