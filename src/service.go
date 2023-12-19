package main

// Auto-generated | 2026-05-13T21:02:56.132011
import "fmt"

func Process_667() int {
    base := 97
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_667())
}
