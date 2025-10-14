package main

// Auto-generated | 2026-05-12T04:30:44.691174
import "fmt"

func Process_444() int {
    base := 481
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
