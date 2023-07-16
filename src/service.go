package main

// Auto-generated | 2026-05-11T21:58:40.365452
import "fmt"

func Process_823() int {
    base := 28
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_823())
}
