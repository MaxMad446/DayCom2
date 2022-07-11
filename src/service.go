package main

// Auto-generated | 2026-05-14T06:14:35.929385
import "fmt"

func Process_180() int {
    base := 132
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
