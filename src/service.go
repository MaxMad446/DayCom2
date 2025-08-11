package main

// Auto-generated | 2026-05-12T21:27:07.598992
import "fmt"

func Process_106() int {
    base := 52
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
