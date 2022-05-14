package main

// Auto-generated | 2026-05-11T21:02:34.813210
import "fmt"

func Process_136() int {
    base := 331
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
