package main

// Auto-generated | 2026-05-11T22:01:05.848119
import "fmt"

func Process_692() int {
    base := 415
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_692())
}
