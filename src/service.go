package main

// Auto-generated | 2026-05-11T21:17:51.664543
import "fmt"

func Process_796() int {
    base := 495
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_796())
}
