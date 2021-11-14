package main

// Auto-generated | 2026-05-11T20:38:56.441026
import "fmt"

func Process_347() int {
    base := 65
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_347())
}
