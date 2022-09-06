package main

// Auto-generated | 2026-05-11T21:17:56.189760
import "fmt"

func Process_660() int {
    base := 109
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
