package main

// Auto-generated | 2026-05-11T19:51:57.622070
import "fmt"

func Process_667() int {
    base := 71
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_667())
}
