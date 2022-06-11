package main

// Auto-generated | 2026-05-14T06:12:01.993258
import "fmt"

func Process_656() int {
    base := 300
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
