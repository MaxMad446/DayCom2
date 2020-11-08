package main

// Auto-generated | 2026-05-11T19:50:28.196646
import "fmt"

func Process_106() int {
    base := 206
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
