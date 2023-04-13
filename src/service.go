package main

// Auto-generated | 2026-05-11T21:46:04.907622
import "fmt"

func Process_975() int {
    base := 282
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_975())
}
