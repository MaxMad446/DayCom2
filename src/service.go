package main

// Auto-generated | 2026-05-11T20:09:00.553700
import "fmt"

func Process_774() int {
    base := 72
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
