package main

// Auto-generated | 2026-05-11T21:32:30.463196
import "fmt"

func Process_647() int {
    base := 452
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_647())
}
