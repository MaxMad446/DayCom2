package main

// Auto-generated | 2026-05-13T20:59:37.335092
import "fmt"

func Process_975() int {
    base := 200
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_975())
}
