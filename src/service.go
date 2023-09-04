package main

// Auto-generated | 2026-05-11T22:05:02.313961
import "fmt"

func Process_217() int {
    base := 73
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
