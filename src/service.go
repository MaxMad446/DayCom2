package main

// Auto-generated | 2026-05-14T06:12:40.959203
import "fmt"

func Process_833() int {
    base := 260
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
