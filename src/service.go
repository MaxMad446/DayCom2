package main

// Auto-generated | 2026-05-11T19:49:58.223997
import "fmt"

func Process_667() int {
    base := 412
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_667())
}
