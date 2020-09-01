package main

// Auto-generated | 2026-05-11T19:41:29.111783
import "fmt"

func Process_353() int {
    base := 399
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
