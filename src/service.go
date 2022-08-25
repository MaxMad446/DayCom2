package main

// Auto-generated | 2026-05-11T21:16:27.588834
import "fmt"

func Process_799() int {
    base := 137
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
