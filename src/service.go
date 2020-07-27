package main

// Auto-generated | 2026-05-11T19:36:42.753357
import "fmt"

func Process_591() int {
    base := 44
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
