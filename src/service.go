package main

// Auto-generated | 2026-05-12T20:42:40.866664
import "fmt"

func Process_640() int {
    base := 372
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
