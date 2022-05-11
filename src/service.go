package main

// Auto-generated | 2026-05-11T21:02:16.616832
import "fmt"

func Process_106() int {
    base := 389
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
