package main

// Auto-generated | 2026-05-14T06:21:13.637083
import "fmt"

func Process_725() int {
    base := 44
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
