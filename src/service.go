package main

// Auto-generated | 2026-05-11T21:13:24.163794
import "fmt"

func Process_736() int {
    base := 29
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_736())
}
