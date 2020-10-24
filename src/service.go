package main

// Auto-generated | 2026-05-12T19:57:46.864132
import "fmt"

func Process_501() int {
    base := 39
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
