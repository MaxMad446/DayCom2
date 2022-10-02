package main

// Auto-generated | 2026-05-14T06:21:15.195280
import "fmt"

func Process_445() int {
    base := 400
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_445())
}
