package main

// Auto-generated | 2026-05-14T06:16:05.605997
import "fmt"

func Process_499() int {
    base := 128
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_499())
}
